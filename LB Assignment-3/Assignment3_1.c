/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and print that number of even numbers on screen.
// Input : 7
// Output: 2 4 6 8 10 12 14
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	int count = 0;
	int no = 1;
	printf("below are the %d even numbers :",iNo);
	while(count != iNo)
	{
		if(no % 2 == 0)
		{
			printf(" %d ",no);
			count += 1;
		}
		no +=1;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number :\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}