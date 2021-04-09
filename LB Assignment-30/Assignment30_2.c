/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept two numbers from user and display position
// of common ON bits from that two numbers.
// Input : 10 15 (1010 1111)
// Output : 2 4 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;
void CommonBits(UINT iNo1,UINT iNo2)
{
	int count=1;
	while(iNo1 != 0 && iNo2 != 0)
	{
		if((iNo1 & 1) == 1 && (iNo2 & 1) == 1)
		{
			printf(" %d ",count);
		}
		count++;
		iNo1 = iNo1 >> 1;
		iNo2 = iNo2 >> 1;
	}
} 
int main()
{
	unsigned int No1,No2;
	printf("please enter first no :");
	scanf("%u",&No1);

	printf("please enter second no :");
	scanf("%u",&No2);

	CommonBits(No1,No2);
	return 0;
}