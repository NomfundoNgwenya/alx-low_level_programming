#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @text_content: content to be appended to the file
 * @filename: The name of the file to append to
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
