#include"main.h"

/**
 * _strlen - calculates the string length
 * @str: string
 * Return: an int
 */

int _strlen(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	return (j);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, len, written;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written = write(file_d, text_content, len);
		if (written == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
