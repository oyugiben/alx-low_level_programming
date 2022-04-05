#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of cli
 * @*argv[]: pointers to the string of inputs
 *
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
