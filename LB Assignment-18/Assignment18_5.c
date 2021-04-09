/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : 2
// Input : N : 6
// NO: 12
// Elements : 85 11 3 15 11 111
// Output : 0 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Frequency(int arr[],int size,int No)
{
	int counter = 0;
	for(int i=0; i<size; i++)
	{
		if(arr[i] == No)
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	int No,iret,iValue;
	int *p = NULL;
	printf("please enter no of elements :");
	scanf("%d",&No);

	printf("Enter the number");
    scanf("%d",&iValue); 

	p = (int *)malloc(No * sizeof(int));

	printf("\n enter the %d elements :",No);

	for(int i =0;i<No;i++)
	{
		printf("\n Enter %d element :",i+1);
		scanf("%d",&p[i]);
	}
	iret = Frequency(p,No,iValue);
	printf("%d",iret);
	free(p); 
	return 0;
}