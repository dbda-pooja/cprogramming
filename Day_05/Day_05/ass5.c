#define _CRT_SECURE_NO_WARNINGS

//print factorial of 1 to 10 numbers


#include<stdio.h>
#include<math.h>
void main()
{
	int i, j , fact ;
	fact = 1;
	for (i = 1; i <= 10; i++)
	{
		fact = 1;
	    for(j = i; j >=1 ; j--)
		{
			fact = fact * j;
		}
		printf("\n\tFactorial of %d is %d:", i, fact);


	}
	printf("\n\n\n");
}