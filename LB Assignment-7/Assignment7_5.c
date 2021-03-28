/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
// Input : 1018
// Output : 6 (8 - 2)
// Input : 8440
// Output : 16 (16 - 0)
// Input : 5733
// Output : -18 (0 - 18)
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultDigits(int iNo)
{
	int iDigit = 0;
	int sumOfEvenDigit =0,sumOfOddDigit=0;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			sumOfEvenDigit += iDigit;
		}
		else if (iDigit % 2 == 1)
		{
			sumOfOddDigit += iDigit;
		}
		
		iNo = iNo / 10;
	}
	return (sumOfEvenDigit - sumOfOddDigit);
}
int main()
{
	int iNo;
	printf("please enter no :");
	scanf("%d",&iNo);
	int count = MultDigits(iNo);
	printf(" %d ", count);
	return 0;
}