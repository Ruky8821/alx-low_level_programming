#include "main.h"
/**
 * read_textfile - read a file and print the file
 * @filename: file to be read
 * @letters: number of byte to print
 * Return: return actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer_byte;
	ssize_t read_op, write_op;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer_byte = malloc(letters * sizeof(char));

	if (buffer_byte == NULL)
	{
		close(fd);
		return (-1);
	}

	read_op = read(fd, buffer_byte, letters);
	if (read_op < 0)
	{
		close(fd);
		free(buffer_byte);
		return (-1);
	}
	write_op = write(STDOUT_FILENO, buffer_byte, read_op);
	if (write_op < 0)
	{
		close(fd);
		free(buffer_byte);
		return (-1);
	}
	close(fd);
	return (read_op);
}
