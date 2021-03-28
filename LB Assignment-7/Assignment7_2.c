/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return the count of odd digits.
// Input : 2395
// Output : 3
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// Input : 8462
// Output : 0
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountOdd(int iNo)
{
	int iDigit = 0;
	int counter =0;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if (iDigit % 2 == 1)
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
	int count = CountOdd(iNo);
	printf(" %d ", count);
	return 0;
}