#define _CRT_SECURE_NO_WARNINGS

//Accept number and print its multiplication number
#include<stdio.h>

void Table(int);  //Decalre a function
void main()
{
	int no; 
	printf("\n\tEnter a Number:");
	scanf("%d", &no);
	Table(no);             //call a function
	printf("\n\n");
}

void Table(int n)      //define a function
{
	int   i;
	for (i = 1; i <= 10; i++)
	{
		printf("\n\t %d * %d = %d", n, i, n * i);
	}
	
}