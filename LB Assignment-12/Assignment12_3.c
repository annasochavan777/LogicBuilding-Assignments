/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 3 iCol = 5
// Output : A A A A A
// 			B B B B B
// 			C C C C C
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
	char ch ='\0';
	for (int i = 1,ch='A'; i <= iRow; i++,ch++)
	{
		for (int j = 1; j <= iCol; j++)
		{
			printf("%c\t",ch);	
		}	
		printf("\n");
	}
	
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter Row : ");
	scanf("%d",&iValue1);
	printf("Enter Col : ");
	scanf("%d",&iValue2);
	DisplayPattern(iValue1,iValue2);
	return 0;
}