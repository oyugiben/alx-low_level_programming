#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */
int main(void)
{
        int i;
        int j;
        int k;
        int l;

        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        for (k = 0; k < 6; k++)
                        {
                                for (l = 0; l < 10; l++)
                                {
                                        putchar(i);
                                        putchar(j);
                                        putchar(':');
                                        putchar(k);
                                        putchar(l);
                                        putchar('\n');
                                }
                        }
                }
        }
	return (0);
}
