#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: context to be written
 * Return: 1 on succes and -1 on failue
 */

int create_file(const char *filename, char *text_content)
{
	int opened_file, write_content;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[len] != '\0'; len++)
		{
			;
		}
	}

	opened_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_content = write(opened_file, text_content, len);

	if (opened_file == -1 || write_content == -1)
		return (-1);

	close(opened_file);
	return (1);
}
