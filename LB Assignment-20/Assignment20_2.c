/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the smallest number.
// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 3
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int arr[],int size)
{
	int min =arr[0]; 
	for(int i=0; i<size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int main()
{
	int No,iret,iValue;
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
	
	iret = Minimum(p, No);
	printf("Smallest Number is %d",iret); 
	
	free(p); 
	return 0;
}