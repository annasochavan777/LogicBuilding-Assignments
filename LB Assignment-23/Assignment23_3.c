/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and return difference 
// between frequency of small characters and frequency of capital characters.
// Input : "MarvellouS"
// Output : 6 (8-2) 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Difference(char *str)
{
 	int smallCnt = 0,capitalCnt=0;
 	
 	while(*str != '\0')
 	{
		if(*str >= 97 && *str <= 122)
		{
			smallCnt++;
		}
		else if(*str >= 65 && *str <= 90)
		{
			capitalCnt++;
		}
		*str++;
 	}
 	return (smallCnt - capitalCnt);
} 
int main()
{
 	char arr[20];
 	int iRet = 0;
 	printf("Enter string :");
	scanf("%[^'\n']s",arr);
 	iRet = Difference(arr);
 	printf("%d",iRet);
 	return 0;
} 