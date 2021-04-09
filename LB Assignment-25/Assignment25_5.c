/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user reverse that string in place.
// Input : "abcd"
// Output : "dcba"
// Input : "abba"
// Output : "abba" 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
	int count =0;
	// calculate the string length
	while(str[count] != '\0')
		count++;

	for(int i=count;i>=0;i--)
	{
		printf("%c",str[i]);
	}
} 
int main()
{
 	char arr[20];
 	
 	printf("Enter string :");
 	scanf("%[^'\n']s",arr);
	
	StrRevX(arr);
 	return 0;
} 