/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which 2 strings from user and concat second string
// after first string. (Implement strcat() function).
// Input : "Marvellous Infosystems"
//  "Logic Building"
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrCatX(char *src, char *dest)
{
 	int c = 0,c1=0;
	while (src[c] != '\0') // Traverse first string till end  
	{
		c++;
  	}
	while (dest[c1] != '\0') // Copy contents of destination in source 
	{
		src[c] = dest[c1];
		c1++;
		c++;
	}
  	src[c] = '\0';
}
int main()
{
 	char arr[50] = "Marvellous Infosystems ";
 	char brr[30] = "Logic Building"; 
 	StrCatX(arr,brr);
 	printf("%s",arr); // Marvellous Infosystems Logic Building
 	return 0;
}

