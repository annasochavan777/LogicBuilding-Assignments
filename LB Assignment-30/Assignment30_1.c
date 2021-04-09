/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.
// Input : 11
// Output : 3 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;
int CountOne(UINT iNo)
{
	int count=0;
	while(iNo != 0)
	{
		if((iNo & 1) == 1)
		{
			count++;
		}
		iNo = iNo >> 1;
	}
	return count;
} 
int main()
{
	unsigned int No;
	int result;
	printf("please enter no :");
	scanf("%u",&No);

	result = CountOne(No);
	printf("%d",result);
	return 0;
}