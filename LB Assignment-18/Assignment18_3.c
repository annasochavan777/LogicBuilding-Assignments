/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user check whether that numbers contains 11 in it or not.
// Input : N : 6
// Elements : 85 66 11 80 93 88
// Output : 11 is present
// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 11 is absent 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL; 
BOOL Check(int arr[],int size)
{
	BOOL result = FALSE;
	for(int i=0; i<size; i++)
	{
		if(arr[i] == 11)
		{
			result = TRUE;
			break;
		}
	}
	return result;
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
	iret = Check(p,No);
	if(iret == TRUE)
 	{
 		printf("11 is present");
 	}
 	else
 	{
 		printf("11 is absent");
 	} 
	free(p); 
	return 0;
}