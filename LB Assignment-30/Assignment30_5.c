/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.
// Input : 10 2 4
// Toggle all bits from position 2 to 4 of input number ie 4. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;
#define TRUE 1
UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	int count = 1;
	unsigned int imask;
	while(TRUE)
	{
		if(count >= iStart && count <= iEnd)
		{
			imask = 0x00000001;
			imask = imask << (count - 1);
			iNo = (iNo ^ imask);
		}
		if(count == iEnd) // reached end then break the loop
		{
			break;
		}
		count++;
	}
	return iNo;
} 
int main()
{
	unsigned int No,result;
	int pos1,pos2;
	printf("please enter no :");
	scanf("%u",&No);

	printf("please enter first position :");
	scanf("%d",&pos1);

	printf("please enter second position :");
	scanf("%d",&pos2);

	result = ToggleBitRange(No,pos1,pos2);
	printf("%u",result);
	return 0;
}