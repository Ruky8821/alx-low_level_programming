#include "main.h"
/**
 * create_file - create a file
 * @filename: nmae of file to creat
 * @text_content: string in file created
 * Return: 1 on success and -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_cr, j, wr_out;

	j = 0;
	if (filename == NULL)
		return (-1);

	file_cr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_cr < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[j])
		{		
			j++;
		}
		wr_out = write(file_cr, text_content, j);
	}
	if (wr_out < 0)
		return (-1);
	close(file_cr);
	return (1);
}
