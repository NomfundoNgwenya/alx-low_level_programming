#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULLL height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
		        free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits string into two
 * @str: string with words to be splited
 *
 * Return: a pointer to the new allocated memory for the string
 */
char **strtow(char *str)
{
	char **aout;
	size_t, height, i, j, a1
	
	if (str == NULL || *STR == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0' c++)
		if (str[c]
