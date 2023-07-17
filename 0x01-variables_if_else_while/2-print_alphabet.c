#include <stdio.h>
/**
 * main - print alphabet in lower case a-z
 *
 * Return: always (0)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
