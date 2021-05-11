#define _CRT_SECURE_NO_WARNINGS

//Accept a character and convert it into opposite case


#include<stdio.h>

void Character(char);
void main()
{
    char ch;
    printf("\n\tEnter a Character : ");
    scanf("%c", &ch);
    Character(ch);
    printf("\n\n\n");

}

void Character(char ch)
{
    char temp = ch;

    if (ch >= 'a' && ch <= 'z')

    {
        ch = ch - 32;

    }
    else
    {
        ch = ch + 32;
    }

    printf("\n\tThe opposite case of %c charater is %c ", temp, ch);

}