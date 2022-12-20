#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - takes a date and print how many days are remaining in year
 * Description: prints date
 * @month: month innumber format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("day of the year: %d\n", day);
		printf("remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("day of the year: %d\n", day);
			printf("remaining days: %d\n", 366 - day);
		}
	}
}
