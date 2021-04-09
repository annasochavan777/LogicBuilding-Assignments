/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and convert it into upper case. 
// Input : "Marvellous Multi OS"
// Output : MARVELLOUS MULTI OS  
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void struprx(char *str)
{
 	while(*str != '\0')
 	{
		if(*str >= 97 && *str <= 122)
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
 	struprx(arr);
 	return 0;
} 