#define _CRT_SECURE_NO_WARNINGS

//print 0 to 255 number along with ASCII value, stop after every 10

#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for (i = 0; i <= 255; i++)
	{
		printf("The ascii value of %d is %c \n", i, i);
		if (i % 10 == 0) {
			printf("\n\n\n");
			_getch();
		}
	}
	printf("\n\n\n");
}