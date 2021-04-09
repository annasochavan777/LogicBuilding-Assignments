/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy small
// characters of that string into another string.
// Input : "Marvellous multi OS"
// Output : "arvellous multi"
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrCpySmall(char *src, char *dest)
{
 	int c = 0,c1 = 0;	
	while (src[c] != '\0') 
	{
		if(src[c] >='a' && src[c] <='z')
		{
			dest[c1] = src[c];
			c1++;
		}
    	c++;
  	}
  	dest[c1] = '\0';
}
int main()
{
 	char arr[30] = "Marvellous Multi OS";
 	char brr[30]; // Empty string
 	StrCpySmall(arr,brr);
 	printf("%s",brr); // arvellous multi 
 	return 0;
}

