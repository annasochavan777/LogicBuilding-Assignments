/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept Character from user and check whether it is small case or not (a-z).
// Input : g
// Output : TRUE
// Input : D
// Output : FALSE
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSmall(char ch)
{
	if(ch >= 97 && ch <= 122)
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
 	char cValue = '\0';
 	BOOL bRet = FALSE;
 	printf("Enter the character :");
 	scanf("%c",&cValue);
 	bRet = ChkSmall(cValue);
	if(bRet == TRUE)
 	{
 		printf("It is Small case Character");
 	}
 	else
 	{
 		printf("It is not a Small case Character");
 	}
 	return 0;
} 