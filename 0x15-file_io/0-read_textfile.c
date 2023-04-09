#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read the content of a text file and print
 * it to POXIS standard output
 * @filename: name of file to be read and printed
 * @letters: number of letters it should read and print
 * Return: 0 if filename is NULL, return 0 if write files or
 * does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_text, write_text, open_text;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	open_text = open(filename, O_RDONLY);
	read_text = read(open_text, buffer, letters);
	write_text = write(STDOUT_FILENO, buffer, read_text);

	if (open_text == -1 || read_text == -1 || write_text == -1
			|| read_text != write_text)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_text);
	return (write_text);
}
