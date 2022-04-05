#include <stdio.h>

/**
 * _islower - Entry point
 * @c: character to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
