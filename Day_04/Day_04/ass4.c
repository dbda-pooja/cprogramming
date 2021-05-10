#define _CRT_SECURE_NO_WARNINGS

//Accept number from user prints its multiplication table and ask for continue , if user say yes then accept new number from user and prints its multiplication table

#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	int no, i;
	char ch[10];
	do {
		system("cls");
		printf("\t-------------------------------------------------------------------------------");
		printf("\n\tEnter a number:");
		scanf("%d", &no);

		printf("\t-------------------------------------------------------------------------------\n");
		for (i = 1; i <= 10; i++)
		{
			printf("\t%d * %d =%d\n", no, i, no * i);
		}
		printf("\t-------------------------------------------------------------------------------");
		printf("\n\tWant to continue\t");
		scanf("%s",ch);
		
	} 	
	while (strcmp(ch, "yes") == 0 || strcmp(ch, 'Yes') == 0 || strcmp(ch, 'YES') == 0);

	
}