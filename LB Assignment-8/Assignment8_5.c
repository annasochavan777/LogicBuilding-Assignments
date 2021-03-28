/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for (int i = 1; i <= 5 ; i++)
	{
		printf(" %d ",(iNo * i));	
	}
}
int main()
{
	int iNo;
	printf("please enter no :");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;
}