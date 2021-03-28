/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accepts N from user and print all odd numbers up to N.
// Input : 18
// Output : 1 3 5 7 9 11 13
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for (int i = 1; i < iNo ; i++)
	{
		if (i % 2 == 1)
		{
			printf(" %d ",i);	
		}
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