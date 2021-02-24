//////////////////////////////////////////////////////////////
// Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo".
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int no)
{
	if(no < 10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number :");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}