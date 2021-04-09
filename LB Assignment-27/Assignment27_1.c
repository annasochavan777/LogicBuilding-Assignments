/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which checks whether 15th bit is On or OFF.  
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo,UINT pos)
{
	unsigned int imask = 0x00000001;
	imask = imask << (pos - 1);
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
	unsigned int No,pos;
	BOOL iret = FALSE;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter the position :");
	scanf("%u",&pos);

	iret = ChkBit(No,pos);
	if(iret == TRUE)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}
	return 0;
}