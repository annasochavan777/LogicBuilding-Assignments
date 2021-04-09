/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo,int pos1,int pos2,int pos3,int pos4)
{
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	unsigned int imask3 = 0x00000001;
	unsigned int imask4 = 0x00000001;
	imask1 = imask1 << (pos1 - 1);
	imask2 = imask2 << (pos2 - 1);
	imask3 = imask3 << (pos3 - 1);
	imask4 = imask4 << (pos4 - 1);
	unsigned int imask5 = imask1 | imask2;
	unsigned int imask6 = imask3 | imask4;
	unsigned int imask = imask5 | imask6;
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
	int pos1,pos2,pos3,pos4;
	BOOL iret = FALSE;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter the 1st position :");
	scanf("%d",&pos1);

	printf("please enter the 2nd position :");
	scanf("%d",&pos2);

	printf("please enter the 3rd position :");
	scanf("%d",&pos3);

	printf("please enter the 4th position :");
	scanf("%d",&pos4);

	iret = ChkBit(No,pos1,pos2,pos3,pos4);
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