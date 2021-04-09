/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and toggle 7th bit of
// that number. Return modified number.
// Input : 137
// Output : 201   
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
UINT ToggleBit(UINT iNo)
{
  unsigned int imask = 0x00000001;
  imask = imask << (7 - 1);
  return imask ^ iNo;
} 
int main()
{
	unsigned int No,result;
	printf("please enter the number :");
	scanf("%u",&No);
	result = ToggleBit(No);
	printf("%u",result);
}