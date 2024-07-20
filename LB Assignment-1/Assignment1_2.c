public void ProcessRequest(string mandatoryParam)
{
    if (string.IsNullOrEmpty(mandatoryParam))
    {
        throw new ArgumentNullException(nameof(mandatoryParam), "Mandatory parameter is missing.");
    }
    // process the request
}
