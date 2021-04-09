/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which checks whether 5th & 18th bit is On or OFF. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo,int pos1,int pos2)
{
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	imask1 = imask1 << (pos1 - 1);
	imask2 = imask2 << (pos2 - 1);
	unsigned int imask = imask1 | imask2;
	unsigned int result = iNo | imask;
 	if(result == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
} 
int main()
{
	unsigned int No;
	int pos1,pos2;
	BOOL iret = FALSE;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter the first position :");
	scanf("%d",&pos1);

	printf("please enter the second position :");
	scanf("%d",&pos2);

	iret = ChkBit(No,pos1,pos2);
	if(iret == TRUE)
	{
		printf("bits are on");
	}
	else
	{
		printf("bits are off");
	}
	return 0;
}