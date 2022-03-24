#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of slashes to be printed
 *
 * Return: always 0
 */
void main(void)
{
	int n = 5;
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
