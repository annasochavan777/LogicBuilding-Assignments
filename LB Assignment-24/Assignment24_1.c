/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and convert it into lower case.
// Input : "Marvellous Multi OS"
// Output : marvellous multi os 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void strlwrx(char *str)
{
 	while(*str != '\0')
 	{
		if(*str >= 65 && *str <= 90)
		{
			printf("%c",(*str + 32));
		}
		else
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
 	strlwrx(arr);
 	return 0;
} 