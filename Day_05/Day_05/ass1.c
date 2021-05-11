#define _CRT_SECURE_NO_WARNINGS

//write a program for following pattern
// * * * * *
// * * * * 
// * * * 
// * * 
// *

#include<stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <=5 ; i++)
	{ 
		printf("\n");
		for (j = 5; j >=i ; j--)
			printf(" * ");
	}
	printf("\n\n\n");
}
