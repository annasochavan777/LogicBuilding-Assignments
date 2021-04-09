/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept character from user and display its ASCII value in decimal,
// octal and hexadecimal format.
// Input : A
// Output : Decimal 65
// Octal 0101
// Hexadecimal 0X41
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Display(char ch)
{
 	printf("Decimal %d\n",ch);
	printf("Octal %o\n",ch);
	printf("Hexadecimal %X",ch);
}
int main()
{
 	char cValue = '\0';
 	printf("Enter the character :");
 	scanf("%c",&cValue);
 	Display(cValue);

 	return 0;
} 