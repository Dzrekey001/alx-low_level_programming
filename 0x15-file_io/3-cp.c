#include "main.h"
#include <stdio.h>
void open_error(char *message, char *file_name, int status);
void close_error(char *message, int FD_VALUE, int status);
/**
 * main - copies the content of a file to another file
 * @argc: number of argment passed
 * @argv: list of all arguments
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	char buffer[1024];
	ssize_t from_file, to_file, read_c, write_c, close_c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
		open_error("Error: Can't read from file", argv[1], 98);

	to_file  = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_file == -1)
		open_error("Error: Can't write to", argv[2], 99);

	do {
		read_c = read(from_file, buffer, 1024);
		if (read_c == -1)
			open_error("Error: Can't read from file", argv[1], 98);
		write_c = write(to_file, buffer, read_c);
		if (write_c == -1)
			open_error("Error: Can't write to", argv[2], 99);
	while (read_c == 1024);

	close_c = close(from_file);
	if (close_c == -1)
		close_error("Error: Can't close fd", (int) from_file, 100);

	close_c = close(to_file);
	if (close_c == -1)
		close_error("Error: Can't close fd", (int) to_file, 100);

	return (0);
}
/**
 * close_error - error if file do not close
 * @message: error message
 * @FD_VALUE: return value of the file
 * @status: exit status
 */
void close_error(char *message, int FD_VALUE, int status)
{
	dprintf(STDERR_FILENO, "%s %d\n", message, FD_VALUE);
	exit(status);
}
/**
 * open_error - error if file do not close
 * @message: error message
 * @file_name: name of the file
 * @status: exit status
 */
void open_error(char *message, char *file_name, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	exit(status);
}

