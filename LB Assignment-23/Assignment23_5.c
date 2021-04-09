/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and display it in reverse order.
// Input : "MarvellouS"
// Output : "SuollevraM" 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
	int count =0;
	// Calculating string length
   	while (str[count] != '\0')
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
 	Reverse(arr);
 	return 0;
} 