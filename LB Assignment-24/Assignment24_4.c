/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and display only digits from that string.
// Input : "marve89llous121"
// Output : 89121
// Input : "Demo"
// Output :
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
 	while(*str != '\0')
 	{
		if(*str >= 48 && *str <= 57)
		{
			printf("%c",*str);
		}
		*str++;
 	}
} 
int main()
{
 	char arr[20];
 	printf("Enter string :");
	scanf("%[^'\n']s",arr);
 	DisplayDigit(arr);
 	return 0;
} 