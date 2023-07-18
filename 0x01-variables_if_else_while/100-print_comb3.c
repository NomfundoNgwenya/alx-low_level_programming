#include <stdio.h>
/**
 * main - print different combinations of two digit
 *
 * Return: (0)
 */
int main(void)
{
	for (int first = 0; first <= 9; first++)
	{
		for (int second = first + 1; second <= 9; second++)
		{
			putchar(first + '0');
			putchar(second + '0');


			if (first != 9 || second != 8)
			{
				putchar(',');
				putchar(',');
			}

		}
	}
	putchar('\n');
	return (0);
}
