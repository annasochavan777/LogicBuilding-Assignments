/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept Range, Display all elements from
// that range
// 
// Input : N : 6
// Start: 60
// End : 90
// Elements : 85 66 3 76 93 88
// Output : 85 66 76 88
// 
// Input : N : 6
// Start: 30
// End : 50
// Elements : 85 66 3 76 93 88
// Output : 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
	for(int i=0; i<iLength; i++)
	{
		if(Arr[i] > iStart && Arr[i] < iEnd)
		{
			printf(" %d ",Arr[i]);
		}
	}
}
int main()
{
	int No,iret,iValue1,iValue2;
	int *p = NULL;
	printf("please enter no of elements :");
	scanf("%d",&No);

	printf("Enter the starting point :");
 	scanf("%d",&iValue1);

 	printf("Enter the ending point :");
 	scanf("%d",&iValue2); 

	p = (int *)malloc(No * sizeof(int));

	printf("\n enter the %d elements :",No);

	for(int i =0;i<No;i++)
	{
		printf("\n Enter %d element :",i+1);
		scanf("%d",&p[i]);
	}
	Range(p,No,iValue1,iValue2);
	free(p); 
	return 0;
}