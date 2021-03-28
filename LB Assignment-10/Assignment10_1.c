/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for (int i = 0; i < iNo; i++)
	{
		printf(" %c ",('A'+i));
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