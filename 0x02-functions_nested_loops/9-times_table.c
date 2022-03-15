#include <stdio>
#include "main.h"

/**
 * times_table - prints out the time table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int f;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (k <= 9)
			{
				_putchar(k);
			} else
			{
				f = k / 10;
				_putchar(f);
				print_last_digit(k);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('\n');
			}
		}
	}
}
