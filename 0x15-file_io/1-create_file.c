#include "main.h"

/**
 * create_file - Creates a file with the given text content
 * @text_content: NULL-terminated string to write to the file.
 * @filename: The name of the file to create.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_res = write(fd, text_content, strlen(text_content));
		if (write_res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
