/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number and position from user and on
// that bit. Return modified number.
// Input : 10 3
// Output : 14
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
UINT OnBit(UINT iNo,UINT pos)
{
	unsigned int imask = 0x00000001;
	imask = imask << (pos - 1);
	return iNo | imask;
} 
int main()
{
	unsigned int No,pos;
	int iret;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter bit position :");
	scanf("%u",&pos);

	iret = OnBit(No,pos);
	printf("%u",iret);
	return 0;
}