/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return difference between summation of all its factors and non factors.
// Input : 12
// Output : -34 (16 - 50)
// Input : 10
// Output : -29 (8 - 37)
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int FactDiff(int iNo)
{
	int sum_of_nonFactors=0,sum_of_Factors=0;
	for (int i =1 ; i <(iNo); i++)
	{
		if(iNo % i != 0)
		{
			sum_of_nonFactors +=i;	
		}
		else if(iNo % i == 0)
		{
			sum_of_Factors +=i;
		}
	}
	return (sum_of_Factors - sum_of_nonFactors);
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number :\n");
	scanf("%d",&iValue);
	int Sum = FactDiff(iValue);
	printf("%d",Sum);
	return 0;
}