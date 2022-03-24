#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int size = 5;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
}
