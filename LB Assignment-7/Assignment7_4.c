/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return multiplication of all digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8
// Input : 9440
// Output : 144
// Input : 922432
// Output : 864
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultDigits(int iNo)
{
	int iDigit = 0;
	int multi =1;
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit != 0)
		{
			multi *= iDigit;
		}
		iNo = iNo / 10;
	}
	return multi;
}
int main()
{
	int iNo;
	printf("please enter no :");
	scanf("%d",&iNo);
	int count = MultDigits(iNo);
	printf(" %d ", count);
	return 0;
}