/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below
// pattern.
// Input : iRow = 4 iCol = 4
// Output :  1 2 3 4
//           1 * * 4
//           1 * * 4
//           1 2 3 4
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
	for(int i=1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol)
			{
				printf("%d\t",j);
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