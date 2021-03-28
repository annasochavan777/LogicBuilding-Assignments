/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and count frequency of such a digits which are less than 6.
// Input : 2395
// Output : 3
// Input : 1018
// Output : 3
// Input : 9440
// Output : 3
// Input : 96672
// Output : 1
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Count(int iNo)
{
	int iDigit = 0;
	int counter = 0;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit < 6)
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
	int count = Count(iNo);
	printf("%d",count);
	return 0;
}
