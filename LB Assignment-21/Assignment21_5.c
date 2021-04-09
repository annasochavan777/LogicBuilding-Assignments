/////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept division of student from user and depends on the division display exam timing. 
// There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, 
// C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)
// Input : C
// Output : Your exam at 9.20 AM
// Input : d
// Output : Your exam at 10.30 AM 
// Author : Annaso Chavan
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
	if(chDiv == 65 || chDiv == 97)
	{
		printf("Your exam at 7 AM");
	}
	else if(chDiv == 66 || chDiv == 98)
	{
		printf("Your exam at 8:30 AM");
	}
	else if(chDiv == 67 || chDiv == 99)
	{
		printf("Your exam at 9:20 AM");
	}
	else if(chDiv == 68 || chDiv == 100)
	{
		printf("Your exam at 10:30 AM");
	}
}
int main()
{
 	char cValue = '\0';
 	printf("Enter your devision :");
 	scanf("%c",&cValue);
 	DisplaySchedule(cValue);
 	return 0;
}