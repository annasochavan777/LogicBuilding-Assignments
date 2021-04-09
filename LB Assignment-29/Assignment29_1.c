/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
// Input : 10 2
// Output : TRUE  
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
	BOOL iret;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter bit position :");
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