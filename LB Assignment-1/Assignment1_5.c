//////////////////////////////////////////////////////////////
// Accept one number from user and print that number of * on screen.
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNo)
{
	for(int iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	}
}

int main()
{
	int iValue = 0;
	iValue = 5;
	Accept(iValue);
	return 0;
}