/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
// Input : 257
// Output : TRUE
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;
BOOL ChkBit(UINT iNo)
{
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	imask1 = imask1 << (9 - 1);
	imask2 = imask2 << (12 - 1);

	unsigned int result1 = iNo | imask1;
	unsigned int result2 = iNo | imask2;

	if(result1 == iNo || result2 == iNo)
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
	BOOL result = FALSE;
	printf("please enter no :");
	scanf("%u",&No);

	result = ChkBit(No);
	if(result)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}
	return 0;
}