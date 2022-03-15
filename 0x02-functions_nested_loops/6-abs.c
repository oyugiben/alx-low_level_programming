#include <stdio.h>

/**
 * _abs - computes the absolute value of input integer
 *@i: integer to be computed
 * Return: absolute value of integer
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (0 - i);
}
