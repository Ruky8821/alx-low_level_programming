#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to copy
 * Return: 1 on success or -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_append, i, write_op;

	i = 0;
	if (!filename)
		return (-1);
	file_append = open(filename, O_WRONLY, O_APPEND);
	if (file_append < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_append);
		return (1);
	}
	if (file_append)
	{
		while (text_content[i])
			i++;
		write_op = write(file_append, text_content, i);
	}

	if (write_op < 0)
		return (-1);
	close(file_append);
	return (1);
}
