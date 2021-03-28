/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return the count of digits in between 3 and 7.
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0
// Input : 4521
// Output : 2
// Input : 9922
// Output : 0
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountRange(int iNo)
{
	int iDigit = 0;
	int counter =0;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if (iDigit > 3 && iDigit < 7)
		{
			counter++;
		}
		iNo = iNo / 10;
	}
	return counter;
}
int main()
{
	int iNo;
	printf("please enter no :");
	scanf("%d",&iNo);
	int count = CountRange(iNo);
	printf(" %d ", count);
	return 0;
}