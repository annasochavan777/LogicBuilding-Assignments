/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and display all such elements which are divisible by 3 and 5.
// Input : N : 6
// Elements : 85 66 3 15 93 88
// Output : 15 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int size)
{
	printf("Below list of numbers are divisible by 3 & 5 :\n");
	for(int i=0; i<size; i++)
	{
		if(arr[i] % 3 == 0 && arr[i] % 5 == 0)
		{
			printf(" %d ",arr[i]);
		}
	}
}
int main()
{
	int No;
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
	Display(p,No);
	free(p); 
	return 0;
}