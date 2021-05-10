#define _CRT_SECURE_NO_WARNINGS

//Accept aplhabate and check whether character is alphabate or not

#include<stdio.h>
void main()
{
	char ch;
	printf("\n\tEnter a Character:");
	scanf("%c", &ch);

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("\n\t The enter character is an alphabate");
	else
		printf("\n\tThe enter character is not an alphabate");

	printf("\n\n\n");
}