#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
			total_len++;
		total_len++;
	}

	concatenated = malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++, j++)
			concatenated[j] = av[i][len];
		concatenated[j] = '\n';
		j++;
	}

	concatenated[j] = '\0';

	return (concatenated);
}
