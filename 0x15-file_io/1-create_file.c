#include "main.h"
/**
 * create_file - create a file
 * @filename: nmae of file to creat
 * @text_content: string in file created
 * Return: 1 on success and -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_created, i, write_out;

	i = 0;
	if (filename == NULL)
		return (-1);

	file_created = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_created < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
		write_out = write(file_created, text_content, i);
	}
	if (write_out < 0)
		return (-1);
	close(file_created);
	return (1);
}
