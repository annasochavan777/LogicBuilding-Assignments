/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print that number of $ & * on screen.
// Input : 5
// Output : $ * $ * $ * $ * $ *
// Input : 3
// Output : $ * $ * $ *
// Input : -3
// Output : $ * $ * $ *
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayPattern(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for (int i = 0; i < iNo ; i++)
	{
		printf(" $ * ");
	}
}
int main()
{
	int iNo;
	printf("please enter no :");
	scanf("%d",&iNo);
	DisplayPattern(iNo);
	return 0;
}