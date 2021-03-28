/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print numbers till that number.
// Input : 8
// Output : 1 2 3 4 5 6 7 8
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for (int i = 1; i <= iNo ; i++)
	{
		printf(" %d ",i);
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