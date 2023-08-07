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
	char *buf_byte;
	ssize_t rd_op, wr_op;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf_byte = malloc(sizeof(char) * letters);

	if (buf_byte == NULL)
	{
		close(fd);
		return (-1);
	}

	rd_op = read(fd, buf_byte, letters);
	if (rd_op < 0)
	{
		close(fd);
		free(buf_byte);
		return (-1);
	}
	wr_op = write(STDOUT_FILENO, buf_byte, rd_op);
	if (wr_op < 0)
	{
		close(fd);
		free(buf_byte);
		return (-1);
	}
	close(fd);
	return (rd_op);
}
