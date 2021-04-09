/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strcpy()
// function)
// Input : "Marvellous Multi OS"
// Output : "Marvellous Multi OS" in another string 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrCpyX(char *src, char *dest)
{
 	int c = 0;
	while (src[c] != '\0') 
	{
    	dest[c] = src[c];
    	c++;
  	}
  	dest[c] = '\0';
}
int main()
{
 	char arr[30] = "Marvellous Multi OS";
 	char brr[30]; // Empty string
 	StrCpyX(arr,brr);
 	printf("%s",brr); // Marvellous Multi OS
 	return 0;
}