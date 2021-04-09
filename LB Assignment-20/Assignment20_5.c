/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and display summation of digits of each number.
// Input : N : 6
// Elements : 8225 665 3 76 953 858
// Output : 17 17 3 13 17 21 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[],int size)
{
	int digit;
	for(int i=0; i<size; i++)
	{
		int num = arr[i];
		int sum =0;
		while(num != 0)
		{
			digit = num % 10;
			sum += digit;
			num = num / 10;
		}
		printf(" %d ",sum);
	}
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
	
	Digits(p, No);
	
	free(p); 
	return 0;
}