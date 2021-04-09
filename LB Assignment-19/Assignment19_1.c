/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as NO ,
// check whether NO is present or not.
// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : TRUE 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int arr[],int size,int No)
{
	BOOL result = FALSE; 
	for(int i=0; i<size; i++)
	{
		if(arr[i] == No)
		{
			result = TRUE;
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

	printf("Enter the number that you want to find");
 	scanf("%d",&iValue); 

	p = (int *)malloc(No * sizeof(int));

	printf("\n enter the %d elements :",No);

	for(int i =0;i<No;i++)
	{
		printf("\n Enter %d element :",i+1);
		scanf("%d",&p[i]);
	}
	iret = Check(p,No,iValue);
	if(iret == TRUE)
 	{
 		printf("Number is present");
 	}
 	else
 	{
 		printf("Number is not present");
 	}
	free(p); 
	return 0;
}