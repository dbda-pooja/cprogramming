#define _CRT_SECURE_NO_WARNINGS

//print first five armstrong numbers

#include<stdio.h>
#include<math.h>
void main()
{
	int no, sum, count,mod ,temp,i;
	printf("\nFirst five aramstrong:");
	for (i = 1; i <= 500; i++)
	{
		no = temp = i;
		count = 0;
		sum = 0;
		while (no != 0)
		{
			mod = no % 10;
			no = no / 10;
			count = count + 1;
			
		}
		no = temp ;
		while (no != 0)
		{
			mod = no % 10;
			sum = sum + pow(mod, count);
			no = no / 10;

		}
		if (temp == sum)
			printf("\n\t%d" ,temp);
		

	}
}
