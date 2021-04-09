/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number and position from user and off
// that bit. Return modified number.
// Input : 10 2
// Output : 8 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
UINT OffBit(UINT iNo,UINT pos)
{
	unsigned int imask = 0x00000001;
	imask = imask << (pos - 1);
	return iNo ^ imask;
} 
int main()
{
	unsigned int No,pos;
	int iret;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter bit position :");
	scanf("%u",&pos);

	iret = OffBit(No,pos);
	printf("%u",iret);
	return 0;
}