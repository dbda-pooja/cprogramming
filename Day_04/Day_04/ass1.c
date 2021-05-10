#define _CRT_SECURE_NO_WARNINGS

//Accept a number from user and find sum of digits of number

#include<stdio.h>
void main()
{
	int no, mod , sum  ;
	printf("\n\tEnter a Number :");
	scanf("%d", &no);
	sum = 0;
	while (no != 0)
	{
		mod = no % 10;
		no = no / 10;
		sum = sum + mod; 

	}
	printf("\n\tSum of digits of given number is : %d", sum);

	printf("\n\n\n");
}