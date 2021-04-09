/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return product of all odd elements.
// Input : N : 6
// Elements : 15 66 3 70 10 88
// Output : 45
// 
// Input : N : 6
// Elements : 44 66 72 70 10 88
// Output : 0
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	int prod = 1;
	for(int i=0; i<iLength; i++)
	{
		if(Arr[i] % 2 == 1)
		{
			prod *= Arr[i];
		}
	}
	return prod;
}
int main()
{
	int No,iret,iValue1,iValue2;
	int *p = NULL;
	printf("please enter no of elements :");
	scanf("%d",&No);

	p = (int *)malloc(No * sizeof(int));

	printf("\n enter the %d elements :",No);

	for(int i =0;i<No;i++)
	{
		printf("\n Enter %d element :",i+1);
		scanf("%d",&p[i]);
	}
	iret = Product(p, No);
	printf("Product is %d",iret); 

	free(p); 
	return 0;
}