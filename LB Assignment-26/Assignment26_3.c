/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy capital
// characters of that string into another string.
// Input : "Marvellous Multi OS"
// Output : "MMOS"
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrCpyCap(char *src, char *dest)
{
 	int c = 0,c1 = 0;	
	while (src[c] != '\0') 
	{
		if(src[c] >='A' && src[c] <='Z')
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
 	StrCpyCap(arr,brr);
 	printf("%s",brr); // Marvellous Multi OS
 	return 0;
}

