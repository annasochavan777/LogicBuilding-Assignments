/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits) 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	return ((iNo & 0x0F) << 4 | (iNo & 0xF0) >> 4);
}

int main()
{
	unsigned int No,result;
	printf("please enter no :");
	scanf("%u",&No);
	result = ToggleBit(No);
	printf("%u",result); 
}