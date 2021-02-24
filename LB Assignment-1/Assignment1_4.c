//////////////////////////////////////////////////////////////
// Accept one number and check whether is is divisible by 5 or not.
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int no)
{
	if(no % 5 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
    int no = 0;
	BOOL bRet = FALSE; 
	printf("please enter number :");
	scanf("%d",&no);
	
	bRet = Check(no);
	
	if(bRet)
	{
		printf("Number is divisible by 5");
	}
	else
	{
		printf("Number is not divisible by 5");
	}
	
	return 0;
}