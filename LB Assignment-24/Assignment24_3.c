/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and toggle the case.
// Input : "Marvellous Multi OS"
// Output : mARVELLOUS mULTI os
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void strtogglex(char *str)
{
 	while(*str != '\0')
 	{
		if(*str >= 65 && *str <= 90)
		{
			printf("%c",(*str + 32));
		}
		else if(*str >= 97 && *str <= 122)
		{
			printf("%c",(*str - 32));
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
 	strtogglex(arr);
 	return 0;
} 