/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept range from user and return addition of all even
// numbers in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 108
// Input : 10 18
// Output : 70
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int StartPoint,int EndPoint)
{
	int sum = 0;
	if(StartPoint > EndPoint || StartPoint <= 0 || EndPoint <= 0)
	{
		printf("Invalid Range");
		return -1;
	}
	for (int i = StartPoint; i <= EndPoint; i++)
	{
		if(i % 2 == 0)
		{
			sum += i;
		}
	}
	return sum;
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter starting point : ");
	scanf("%d",&iValue1);
	printf("Enter ending point : ");
	scanf("%d",&iValue2);
	int sum = RangeSum(iValue1, iValue2);
	printf("Addition is %d ",sum);
	return 0;
}