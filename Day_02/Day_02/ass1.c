#define _CRT_SECURE_NO_WARNINGS

//aCCEPT ONE NUMBER AND CHECK WHETHER GIVEN NUMBER IS EVEN OR ODD

#include<stdio.h>
void main()
{
	int no;
	printf("\n\tEnter a number:");
	scanf("%d", &no);
	
	if (no % 2 == 0)
		printf("\n\tGiven number is Even");
	else
		printf("\n\tGiven number is Odd");

	printf("\n\n\n");
}
