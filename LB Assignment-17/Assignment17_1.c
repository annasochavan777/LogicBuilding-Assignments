/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return difference between summation of even elements and 
// summation of odd elements. 
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 53 (234 - 181) 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int size)
{
	int sum_of_odd_no = 0,sum_of_even_no=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] % 2 == 0)
		{
			sum_of_even_no += arr[i];
		}
		else
		{
			sum_of_odd_no += arr[i];
		}
	}
	return (sum_of_even_no - sum_of_odd_no);
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