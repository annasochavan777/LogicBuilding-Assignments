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

I am not feeling well, so I will be taking a day off today. Regarding the Payslip Calculator AutoSys job testing, only the DBA-related activities are pending. I will connect with Tuchar for 30 minutes to get this sorted out today itself.
