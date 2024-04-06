#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: number of char
 */

int _strlen(const char *s)
{
	int nombreDeCaracteres = 0;

	while (*s != '\0')
	{
		nombreDeCaracteres++;
		s++;
	}
	return (nombreDeCaracteres);
}

/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: appends this content into file
 *
 * Return: 1 on success, -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (!filename)
		return (-1);

	/* open file if it exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if nothing to write, still successful */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
