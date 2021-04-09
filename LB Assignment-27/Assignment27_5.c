/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which checks whether first and last bit is On or
// OFF. First bit means bit number 1 and last bit means bit number 32. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	imask1 = imask1 << (1 - 1);
	imask2 = imask2 << (32 - 1);
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
	BOOL iret = FALSE;
	printf("please enter no :");
	scanf("%u",&No);

	iret = ChkBit(No);
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