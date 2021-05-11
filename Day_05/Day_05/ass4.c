#define _CRT_SECURE_NO_WARNINGS

//print first five armstrong numbers

#include<stdio.h>
void main()
{
	int no, j, count;

	printf("\nfirst 10 even numbers are :");

	for (no = 1; no <= 20; no++)
	{
		if (no % 2 ==0)
			printf(" \n\t%d ", no);
		
	}
	printf("\n\n\n");
}