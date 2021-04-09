/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one
// character. Return index of first occurrence of that character.
// Input : "Marvellous Multi OS"
//  M
// Output : 0 
// Input : "Marvellous Multi OS"
//  W
// Output : -1
// Input : "Marvellous Multi OS"
//  e
// Output : 4 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
	int index = -1;
	int count =0;
 	while(*str != '\0')
 	{
		if(*str == ch)
		{
			index = count;
			break;
		}
		*str++;
		count++;
 	}
	return index;
} 
int main()
{
 	char arr[20];
 	char cValue;
	int iRet;

 	printf("Enter string :");
 	scanf("%[^'\n']s",arr);
	
	printf("Enter the character :");
	scanf(" %c", &cValue);

	iRet = FirstChar(arr, cValue);
 	printf("Character location is %d",iRet); 
 	return 0;
} 