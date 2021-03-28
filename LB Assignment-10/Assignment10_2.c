/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display below pattern.
// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for (int i = iNo; i > 0; i--)
	{
		printf(" %d # ",i);
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