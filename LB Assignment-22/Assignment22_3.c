/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept character from user. If it is capital then display all the
// characters from the input characters till Z. If input character is small
// then print all the characters in reverse order till a. In other cases
// return directly.
// Input : Q
// Output : Q R S T U V W X Y Z
// Input : m
// Output : m l k j i h g f e d c b a
// Input : 8
// Output : 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Display(char ch)
{
 	if(ch >= 65 && ch <= 90) // Capital letter 
	{
		for(int i=ch;i<=90;i++)
		{
			printf(" %c ",i);
		}
	}
	else if(ch >= 97 && ch <= 122) // Small letter
	{
		for(int i=ch;i>=97;i--)
		{
			printf(" %c ",i);
		}	
	}
}
int main()
{
 	char cValue = '\0';
 	printf("Enter the character :");
 	scanf("%c",&cValue);
 	Display(cValue);

 	return 0;
} 