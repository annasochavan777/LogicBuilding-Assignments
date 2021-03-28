/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and count frequency of 4 in it.
// Input : 2395
// Output : 0
// Input : 1018
// Output : 0
// Input : 9440
// Output : 2
// Input : 922432
// Output : 1
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountFour(int iNo)
{
	int iDigit = 0;
	int counter = 0;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 4)
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
	printf("Please Enter no :");
	scanf("%d",&iNo);
	int count = CountFour(iNo);
	printf("%d",count);
	return 0;
}
