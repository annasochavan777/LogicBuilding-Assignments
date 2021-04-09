/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and check whether
// it contains vowels in it or not.
// Input : "marvellous"
// Output : TRUE
// Input : "Demo"
// Output : TRUE
// Input : "xyz"
// Output : FALSE
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
	BOOL isVowel = FALSE;
 	while(*str != '\0')
 	{
		if(*str == 97 || *str == 101 || *str == 105 || *str == 111 || *str == 117
			|| *str == 65 || *str == 69 || *str == 73 || *str == 79 || *str == 85)
		{
			isVowel =  TRUE;
			break;
		}
		*str++;
 	}
 	return isVowel;
} 
int main()
{
 	char arr[20];
 	BOOL iRet = FALSE;
 	printf("Enter string :");
	scanf("%[^'\n']s",arr);
 	iRet = ChkVowel(arr);
	if(iRet == TRUE)
 	{
 		printf("Contains Vowel");
 	}
 	else
 	{
 		printf("There is no Vowel");
 	} 
 	return 0;
} 