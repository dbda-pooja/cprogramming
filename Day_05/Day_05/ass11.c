#define _CRT_SECURE_NO_WARNINGS

//Accept three numbers and find of maximum

#include<stdio.h>

int Maximum(int, int, int);
void main()
{
	int a, b, c,max ;
	printf("\n\tEnter three numbers :");
	scanf("%d %d %d", &a, &b, &c);
	max = Maximum(a, b, c);
	printf("\n\n\t Max : %d", max);
	printf("\n\n\n");

	
}

int Maximum(int a, int b, int c)
{
	int max = a;

	if (max < b){
		max = b;
	}

	if (max < c)
	{
		max = c;
	}

	return max;
}
