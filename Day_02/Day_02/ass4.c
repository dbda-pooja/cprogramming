#define _CRT_SECURE_NO_WARNINGS

//Accept basic salary and total sales from users and calculate commision and net salary
//Total salary is 5000 to 7000 commision is 3%
//Total salary is 7001 to 10000 commision is 5%
//Total salary is 100001 to 15000 commision is 10%
//Total salary is 150001 commision is 15%

#include<stdio.h>
void main()
{
	double basic_salary, total_sales,commision,net_salry;
	printf("\n\tEnter a basic salary:");
	scanf("%lf", &basic_salary);
	printf("\n\tEnter a total_sales:");
	scanf("%lf", &total_sales);

	if (basic_salary > 0 && total_sales > 0)
	{
		if (total_sales >= 5000 && total_sales <= 7000)
		{
			commision = ((basic_salary * 3) / 100);
			net_salry = commision + basic_salary;
		}
		else if(total_sales >= 7001 && total_sales <= 10000)
		{
			commision = ((basic_salary * 5) / 100);
			net_salry = commision + basic_salary;
		}

		else if(total_sales >= 100001 && total_sales <= 15000)
		{
			commision = ((basic_salary * 10) / 100);
			net_salry = commision + basic_salary;
		}

		else if(total_sales = 150001)
		{
			commision = ((basic_salary * 15) / 100);
			net_salry = commision + basic_salary;
		}
		printf("\n\tCommision : %lf, Net Salaray :%lf", commision, net_salry);

	}
	else
		printf("\n\tPlease enter a positive value and try again");


	printf("\n\n\n");
}

