#define _CRT_SECURE_NO_WARNINGS
//Accept start value and end value and print series according to that

#include<stdio.h>
void main()
{
	int i, j, k=0;
	printf("Enter Start Value :\t");
	scanf("%d",&i);
	printf("Enter end value:\t");
	scanf("%d",&j);
	if (i < j)
	{
		for (k = i; k <= j; k++)
			printf("%d\n", k);
	}
	else
	{
		for (k = i; k >= j; k--)
			printf("%d\n", k);
	}
		
}