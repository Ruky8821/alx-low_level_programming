#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to copy
 * Return: 1 on success or -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_appnd, i, wr_op;

	i = 0;
	if (filename == NULL)
		return (-1);
	file_appnd = open(filename, O_WRONLY, O_APPEND);
	if (file_appnd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file_appnd);
		return (-1);
	}
	if (file_appnd)
	{
		while (text_content[i])
			i++;
		wr_op = write(file_appnd, text_content, i);
	}

	if (wr_op < 0)
		return (-1);
	close(file_appnd);
	return (1);
}
