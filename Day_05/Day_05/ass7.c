#define _CRT_SECURE_NO_WARNINGS

//Accept number from user and calculate square of number

#include<stdio.h>

void Square(int);  //Decalre a function
void main()
{
	int no;
	printf("\n\tEnter a Number:");
	scanf("%d", &no);
	Square(no);             //call a function
	printf("\n\n");
}

void Square(int n)      //define a function
{
	int   sque;
	sque = n * n;
	printf("\n\n\tSquare of %d id %d", n, sque);


}