#define _CRT_SECURE_NO_WARNINGS

//Accept two numbers and perform basic arthimatic calculations with switch case statement.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    int op;
    printf(" 1.Addition (+)\n 2.Subtraction(-)\n 3.Multiplication (*)\n 4.Division(/)\n");
    printf("\n\tEnter the values of a & b: ");
    scanf("%d %d", &a, &b);
    printf("\n\tEnter your Choice : ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("\n\tSum of %d and %d is : %d", a, b, a + b);
        break;
    case 2:
        printf("\n\tDifference of %d and %d is : %d", a, b, a - b);
        break;
    case 3:
        printf("\n\tMultiplication of %d and %d is : %d", a, b, a * b);
        break;
    case 4:
        printf("\n\tDivision of Two Numbers is : %d",a / b);
        break;
    default:
        printf(" \n\tEnter Your Correct Choice.");
        break;
    }
    printf("\n\n\n");
}