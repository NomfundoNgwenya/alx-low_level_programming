#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a text file.
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print.
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	n = read(fd, buff, letters);
	if (n == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	n = write(STDOUT_FILENO, buff, n);
	if (n == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (n);
}
