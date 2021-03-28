/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display below pattern.
// Input : 8
// Output : 2 4 6 8 10 12 14 16
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int i =2;
	int counter = 0;
	while (counter != iNo)
	{
		printf(" %d ",i);
		i += 2;
		counter++;
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter Number : ");
	scanf("%d",&iValue1);
	DisplayPattern(iValue1);
	return 0;
}