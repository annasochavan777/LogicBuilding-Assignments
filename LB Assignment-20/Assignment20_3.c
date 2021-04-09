/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the difference between largest and smallest number.
// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 90 (93 -3)
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int size)
{
	int min =arr[0]; 
	int max =0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return (max - min);
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
	
	iret = Difference(p, No);
	printf("“Difference is %d",iret); 
	
	free(p); 
	return 0;
}