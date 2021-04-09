/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and off 7th and 10th
// bit of that number. Return modified number.
// Input : 577
// Output : 1   
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
UINT OffBit(UINT iNo)
{
  unsigned int imask1 = 0x00000001;
  unsigned int imask2 = 0x00000001;
  imask1 = imask1 << (7 - 1);
  imask2 = imask2 << (10 - 1);
  unsigned int imask = ~(imask1 | imask2);
  return imask & iNo;
} 
int main()
{
	unsigned int No,result;
	printf("please enter the number :");
	scanf("%u",&No);
	result = OffBit(No);
	printf("%u",result);
}