/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number.   
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
UINT ChkBit(UINT iNo,UINT pos)
{
	unsigned int imask = 0x00000001;
	imask = ~(imask << (7 - 1));
	unsigned int result = iNo & imask;
 	return result;
} 
int main()
{
	unsigned int No,pos;
	int iret;
	printf("please enter no :");
	scanf("%u",&No);

	iret = ChkBit(No,pos);
	printf("%u",iret);
	return 0;
}