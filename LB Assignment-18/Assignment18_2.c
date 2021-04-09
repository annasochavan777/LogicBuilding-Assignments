/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return difference between frequency of even number and odd numbers.
// Input : N : 7
// Elements : 85 66 3 80 93 88 90
// Output : 1 (4 -3) 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int size)
{
	int Evencounter =0,Oddcounter =0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] % 2 == 0)
		{
			Evencounter++;
		}
		else if(arr[i] % 2 == 1)
		{
			Oddcounter++;
		}
	}
	return (Evencounter - Oddcounter);
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
	iret = Difference(p,No);
	printf("\n Result is %d",iret);
	free(p); 
	return 0;
}