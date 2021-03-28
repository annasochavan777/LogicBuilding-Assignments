/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display
// below pattern.
// Input : iRow = 3 iCol = 4
// Output : 1 1 1 1
// 			2 2 2 2
// 			3 3 3 3
// 			4 4 4 4
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{

	for (int i = 1; i <= iRow; i++)
	{
		for (int j = 1; j <= iCol; j++)
		{
			printf("%d\t",i);
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