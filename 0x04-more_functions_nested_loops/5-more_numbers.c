#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				k = j;
			}
			else
			{
				k = j % 10;
				l = j / 10;
				_putchar(l + '0');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
