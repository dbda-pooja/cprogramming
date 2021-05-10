#define _CRT_SECURE_NO_WARNINGS

//Accept number base and index from user and find out power of given number


#include<stdio.h>
void main()
{
	int index, base, power;
	printf("\n\tEnter a number for index:");
	scanf("%d", &index);
	printf("\n\tEnter a number for base:");
	scanf("%d", &base);
	power = 1;

	while (index != 0)
	{
		power = power * base;
		index = index - 1;

	}
	printf("\n\tPower of given number is %d", power);

	printf("\n\n\n");
}
