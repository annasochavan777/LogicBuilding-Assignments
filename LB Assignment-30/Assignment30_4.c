/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.
// Input : 10 3 7
// Output : TRUE 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;
BOOL ChkBit(UINT iNo,int pos1,int pos2)
{
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	imask1 = imask1 << (pos1 - 1);
	imask2 = imask2 << (pos2 - 1);

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
	int pos1,pos2;
	BOOL result = FALSE;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter first position :");
	scanf("%d",&pos1);

	printf("please enter second position :");
	scanf("%d",&pos2);

	result = ChkBit(No,pos1,pos2);
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