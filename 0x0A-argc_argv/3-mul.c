#include <stdio.h>
#include <stslib.h>

/**
 * main -Entry point
 * @argc: number of cl arguments
 * @*argv[]: strings of cl arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		exit(EXIT_SUCCESS);
	}
}
