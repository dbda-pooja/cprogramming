#define _CRT_SECURE_NO_WARNINGS

//Accept base and index from user and find out power of given nuber


#include<stdio.h>

void Power(int, int);
void main()
{
	int index, base, power;
	printf("\n\tEnter a number for index:");
	scanf("%d", &index);
	printf("\n\tEnter a number for base:");
	scanf("%d", &base);
	Power(index, base);
	printf("\n\n\n");
	

}

void Power(int index, int base)
{
	int temp = 1 ;
	while (index != 0)
	{
		temp = temp * base;
		index = index - 1;

	}
	printf("\n\tPower of given number is %d", temp);

}