//////////////////////////////////////////////////////////////
// Program to divide two numbers
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
int Divide(int iNo1, int iNo2)
{
	int iAns = 0;
	if(iNo2 == 0)
	{
		return -1;
	}
	iAns = iNo1 / iNo2;
	return iAns;
}

int main()
{
	int iValue1 = 15, iValue2 = 5;
	int iRet = 0;
	iRet = Divide(iValue1, iValue2);
	printf("Division is %d", iRet);
	return 0;
}
Thank you so much, Ashish, for providing quick assistance in resolving all the case file-related issues.
WITH LatestOrders AS (
    SELECT
        o.order_id,
        o.customer_id,
        o.order_date,
        o.amount,
        ROW_NUMBER() OVER (PARTITION BY o.customer_id ORDER BY o.order_date DESC) AS rn
    FROM
        orders o
)
SELECT
    c.customer_id,
    c.customer_name,
    lo.order_id,
    lo.order_date,
    lo.amount
FROM
    customers c
JOIN
    LatestOrders lo ON c.customer_id = lo.customer_id
WHERE
    lo.rn = 1;
