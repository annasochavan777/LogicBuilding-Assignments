/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and print its numbers line.
// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
	int no = iNo;
	if(iNo > 0)
	{
		iNo = -iNo;
	}
	for (int i = iNo; i <= no ; i++)
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