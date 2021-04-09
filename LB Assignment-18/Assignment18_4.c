/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return frequency of 11 form it.
// Input : N : 6
// Elements : 85 66 3 15 93 88
// Output : 0
// Input : N : 6
// Elements : 85 11 3 15 11 111
// Output : 2
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Frequency(int arr[],int size)
{
	int counter = 0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] == 11)
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	int No,iret;
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
	iret = Frequency(p,No);
	printf("%d",iret);
	free(p); 
	return 0;
}