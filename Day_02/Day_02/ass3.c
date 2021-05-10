#define _CRT_SECURE_NO_WARNINGS

//Accept character and convert it into oppsite case

#include<stdio.h>
void main()
{
    char ch;
    printf("\n\tEnter a Character : ");
    scanf("%c", &ch);
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

    printf("\n\n\n");
}