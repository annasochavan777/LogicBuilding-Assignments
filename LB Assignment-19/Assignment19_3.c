/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as NO ,
// return index of last occurrence of that NO.
// Input : N : 6
//  NO: 66
//  Elements : 85 66 3 66 93 88
// Output : 3
// Input : N : 6
//  NO: 93
//  Elements : 85 66 3 66 93 88
// Output : 4
// Input : N : 6
//  NO: 12
//  Elements : 85 11 3 15 11 111
// Output : -1 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOccurrence(int arr[],int size,int No)
{
	int result = -1; 
	for(int i=(size-1); i>=0; i--)
	{
		if(arr[i] == No)
		{
			result = i;
			break;
		}
	}
	return result;
}
int main()
{
	int No,iret,iValue;
	int *p = NULL;
	printf("please enter no of elements :");
	scanf("%d",&No);

	printf("Enter the number that you want to find :");
 	scanf("%d",&iValue); 

	p = (int *)malloc(No * sizeof(int));

	printf("\n enter the %d elements :",No);

	for(int i =0;i<No;i++)
	{
		printf("\n Enter %d element :",i+1);
		scanf("%d",&p[i]);
	}
	iret = LastOccurrence(p,No,iValue);
	if(iret == -1)
 	{
 		printf("There is no such number");
 	}
 	else
 	{
 		printf("Last occurrence of number is %d",iret);
 	}
	free(p); 
	return 0;
}