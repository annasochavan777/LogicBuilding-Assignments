/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return frequency of even numbers.
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 3 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountFreq(int arr[],int size)
{
	int counter =0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] % 2 == 0)
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
	iret = CountFreq(p,No);
	printf("\n Even Number count is %d",iret);
	free(p); 
	return 0;
}