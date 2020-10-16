#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void select_day(int* x);
int main()
{
	int input[2],totalday=0,loop;
	scanf("%d", &input[0]);
	scanf("%d", &input[1]);

	for (loop = 0; loop < input[1]-1; loop++)
	{
		if (loop + 1 == 1|| loop + 1 == 2|| loop + 1 == 3|| loop + 1 == 5|| loop + 1 == 7|| loop + 1 == 8|| loop + 1 == 10|| loop + 1 == 12)
		{
			if (loop + 1 == 2)
			{
				totalday += 28;
			}
			else
			{
				totalday += 31;
			}
		}
		else
		{
			totalday += 30;
		}
	}
	totalday += input[0];
	totalday = totalday % 7;
	select_day(&totalday);
	
	return 0;
}
void select_day(int *x)
{
	if (*x == 1)
	{
		printf("Thursday");
	}
	else if (*x == 2)
	{
		printf("Friday");
	}
	else if (*x == 3)
	{
		printf("Saturday");
	}
	else if (*x == 4)
	{
		printf("Sunday");
	}
	else if (*x == 5)
	{
		printf("Monday");
	}
	else if (*x == 6)
	{
		printf("Tuesday");
	}
	else if (*x == 0)
	{
		printf("Wednesday");
	}
	
}