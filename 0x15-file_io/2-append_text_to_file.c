#include "main.h"
/**
 * append_text_to_file - append a text to the end of
 * a file
 * @filename: the name of the file
 * @text_content: text to append
 * Return: if filename is NULL -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int buffer, len;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	buffer = open(filename, O_RDWR | O_APPEND);
	if (buffer < 0)
		return (-1);

	for (len = 0; text_content[len]; len++)
		;

	write(buffer, text_content, len);
	close(buffer);

	return (1);
}
