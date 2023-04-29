#include"main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int i = 0;
	int w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
		{
			i++;
		}
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, i);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);
	return (1);
}
