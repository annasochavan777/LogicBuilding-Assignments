/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and check whether it contains 0 in it or not.
// Input : 2395
// Output : There is no Zero
// Input : 1018
// Output : It Contains Zero
// Input : 9000
// Output : It Contains Zero
// Input : 10687
// Output : It Contains Zero
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
	BOOL result = FALSE;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int iDigit = 0;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if (iDigit == 0)
		{
			result =  TRUE;
			break;
		}
		iNo = iNo / 10;
	}
	return result;
	
}
int main()
{
	int iValue = 0;
	printf("Enter number :\n");
	scanf("%d",&iValue);
	BOOL result = ChkZero(iValue);
	if(result == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	return 0;
}