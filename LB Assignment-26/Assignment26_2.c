/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strncpy()
// function)
// Input : "Marvellous Multi OS"
//  10
// Output : "Marvellous
// Note : If third parameter is greater than the size of source string then
// copy whole string into destination. 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrNCpyX(char *src, char *dest,int length)
{
 	int c = 0;	
	while (src[c] != '\0' && length != 0) 
	{
    	dest[c] = src[c];
    	c++;
		length--;
  	}
  	dest[c] = '\0';
}
int main()
{
 	char arr[30] = "Marvellous Multi OS";
 	char brr[30]; // Empty string
 	StrNCpyX(arr,brr,10);
 	printf("%s",brr); // Marvellous Multi OS
 	return 0;
}