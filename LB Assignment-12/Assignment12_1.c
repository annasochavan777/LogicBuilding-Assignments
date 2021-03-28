/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output : A B C D
// 			A B C D
// 			A B C D
// 			A B C D
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
	char ch ='\0';
	for (int i = 1; i <= iRow; i++)
	{
		for (int j = 1,ch='A'; j <= iCol; j++,ch++)
		{
			printf("%c\t",(ch));
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