#define _CRT_SECURE_NO_WARNINGS
//Print all prime numbers from 1 to 100

#include<stdio.h>
void main()
{
	int no, j , count;

	printf("\nAll Primes from 1 to 100 are :");

	for (no = 1; no <= 100; no++)
	{ 
		count = 0;
	    for (j = 2 ; j <= no/2; j++)
		{
			if (no % j == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0 && no != 1)
		{
			printf(" \n\t%d ", no);
		}
	}
	printf("\n\n\n");
}
