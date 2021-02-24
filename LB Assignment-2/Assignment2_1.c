//////////////////////////////////////////////////////////////
// Accept one number from user and print that number of * on screen.
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
	for(int i=0;i<iNo;i++)
	{
		printf(" * ");
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}