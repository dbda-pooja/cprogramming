#define _CRT_SECURE_NO_WARNINGS

//Accept radius and print area of circle

#include<stdio.h>

float AreaCircle(int);
void main()
{
	int rad;
	float area; 
	printf("\n\n\tEnter a value of radius:");
	scanf("%d", &rad);
	area = AreaCircle(rad);
	printf("\n\n\t Area : %f", area);
	printf("\n\n\n");
}

float AreaCircle(int r)
{
	float A;
	A = 3.14 * r * r;
	return A;
}
