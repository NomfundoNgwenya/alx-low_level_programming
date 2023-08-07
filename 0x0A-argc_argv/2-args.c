#include <stdio.h>

/**
 * main - Prints all arguments received.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the command line arguments.
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}