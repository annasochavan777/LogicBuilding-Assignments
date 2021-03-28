/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 5 iCol = 5
// Output : $ * * * *
// 			* $ * * *
// 			* * $ * *
// 			* * * $ *
// 			* * * * $
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
	for(int i=0;i<iRow;i++)
    {
        for(int j=0;j<iCol;j++)
        {
            if(i==j)
			{
				printf("$\t");
			}
			else 
			{
				printf("*\t");
			}
			

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