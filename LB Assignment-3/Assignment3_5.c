///////////////////////////////////////////////////////////////////////////////////////
// Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
// Input : E Output : TRUE
// Input : d Output : FALSE
// Author : Annaso Chavan
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool ChkVowel(char c)
{
	int lowercase_vowel,uppercase_vowel;

	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if(lowercase_vowel || uppercase_vowel)
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
	bool bRet = FALSE;
	printf("Enter character\n");
	scanf("%c",&cValue);
	bRet = ChkVowel(cValue);
	if (bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is not Vowel");
	}
	return 0;
}