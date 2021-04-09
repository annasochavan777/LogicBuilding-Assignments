/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one
// character. Return index of last occurrence of that character.
// Input : "Marvellous Multi OS"
//  M
// Output : 11
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

int LastChar(char *str,char ch)
{
	int index = -1;
	int count =0;
	// calculate the string length
	while(str[count] != '\0')
		count++;

	for(int i=count;i>=0;i--)
	{
		if(str[i] == ch)
		{
			index = i;
			break;
		}
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

	iRet = LastChar(arr, cValue);
 	printf("Character location is %d",iRet); 
 	return 0;
} 