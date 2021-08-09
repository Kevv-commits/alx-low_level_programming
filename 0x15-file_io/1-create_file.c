#include "main.h"

/**
 * create_file - function to create a file
 * @filename: file
 * @text_content: number of letters of the file
 * Return: numbers of letters or zero it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
