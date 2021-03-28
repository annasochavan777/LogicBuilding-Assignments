/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return difference between summation of all its factors and non factors.
// Input : 12
// Output : 50
// Input : 10
// Output : 37
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int SumOfNonFact(int iNo)
{
	int sum=0;
	for (int i =1 ; i <=(iNo); i++)
	{
		if(iNo % i != 0)
		{
			sum	+=i;	
		}
	}
	return sum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number :\n");
	scanf("%d",&iValue);
	int Sum = SumOfNonFact(iValue);
	printf("Sum of non factor number is %d",Sum);
	return 0;
}