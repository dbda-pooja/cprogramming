#define _CRT_SECURE_NO_WARNINGS

//Program that prints table of accepted number

#include<stdio.h>
void main()
{
	int no,i;
	printf("Enter a number:\t");
	scanf("%d", &no);
	
	for (i = 1; i <= 10; i++)
		printf("\n\t%d * %d = %d", no, i, no * i);

	printf("\n\n\n");

}