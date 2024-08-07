public static Money GetTotalIndebtedness(ApplicationData data)
{
    var totalIndebtedness = new BigDecimal(0);
    BigDecimal totalRunningPartCcBalance = null;
    BigDecimal reservedLimitPrimaryCcItem = null;
    BigDecimal outstandingPartCcBal = null;
    
    if (data.ApplicantOverviewResponse?.LinkedMortgages != null &&
        data.ApplicantOverviewResponse.LinkedMortgages.Count > 0)
    {
        totalRunningPartCcBalance = data.ApplicantOverviewResponse.LinkedMortgages
            .Where(m => m.NonNull())
            .SelectMany(m => m.LinkedMortgage)
            .Where(m => m.MultiPartMortgage)
            .Select(m => m.CurrentAccountReserveBalance)
            .Aggregate(new BigDecimal(0), (current, value) => current.Add(value));
        
        outstandingPartCcBal = data.ApplicantOverviewResponse.LinkedMortgages
            .SelectMany(m => m.LinkedMortgage)
            .Where(m => m.MultiPartMortgage)
            .Select(m => m.OutstandingPartCcBalance)
            .Aggregate(new BigDecimal(0), (current, value) => current.Add(value));
    }

    totalIndebtedness = totalIndebtedness.Add(totalRunningPartCcBalance);
    totalIndebtedness = totalIndebtedness.Add(outstandingPartCcBal);

    var appliedIndicator = data.ApplicantOverviewResponse?.LoanSummary?.LoanData
        .Where(d => d.FA)
        .Select(d => d.AdditionalLoanRequired)
        .FirstOrDefault();

    if (appliedIndicator != null && data.ApplicantOverviewResponse?.LoanSummary != null)
    {
        var totalLoanAmount = data.ApplicantOverviewResponse.LoanSummary.LoanData
            .Where(d => d.AdditionalLoanRequired)
            .Select(d => d.TotalLoanAmount)
            .Aggregate(new BigDecimal(0), (current, value) => current.Add(value));
        
        totalIndebtedness = totalIndebtedness.Add(totalLoanAmount);
    }

    return new Money(totalIndebtedness.ToDouble(), "GBP");
}
