/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and on its first 4
// bits. Return modified number.
// Input : 73
// Output : 79   
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
UINT OnBit(UINT iNo)
{
  unsigned int imask = 0xF;
  return iNo | imask;
} 
int main()
{
	unsigned int No=0,result=0;
	printf("please enter the number :");
	scanf("%u",&No);
	result = OnBit(No);
	printf("%u",result);
}