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
There is no logic currently in place to automatically generate a requirement when there is a rule failure. As a result, a task is created, and the underwriter needs to take action manually. If you want to automate the generation of this requirement, please provide us with the specific logic that should trigger the requirement. Alternatively, you can supply us with the corresponding DP (Decision Point) codes.
