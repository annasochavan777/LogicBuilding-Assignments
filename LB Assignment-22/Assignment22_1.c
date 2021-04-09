/////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which displays ASCII table. Table contains symbol,
// Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void DisplayASCII()
{
	for(int i=0;i < 256;i++)
	{
		printf(" %d %x %o %c \n",i,i,i,i);
	}
}
int main()
{
 	DisplayASCII();

 	return 0;
} 