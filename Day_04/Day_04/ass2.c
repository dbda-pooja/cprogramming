#define _CRT_SECURE_NO_WARNINGS

//Accept a number from user and print factorial of number

#include<stdio.h>
void main()
{
	int no, i , fact;
	printf("\n\tEnter a Number :");
	scanf("%d", &no);
	fact = 1;

	if (no < 0)
		printf("\n\tFactorial does not exist for negative numbers");

	else if(no == 0)
		printf("\n\tFactorial of zero is 1");

	else if (no > 0)
	{
		for (i = no; i >= 1; i--)
			fact = fact * i;
		    printf("\n\tFactorial of given number is %d", fact);
	}

	
	
	printf("\n\n\n");
}
