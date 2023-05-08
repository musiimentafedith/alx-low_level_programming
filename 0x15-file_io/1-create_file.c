#include"main.h"
/**
 * _strlen - calculate length of a string
 * @str: string
 * Return: int
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
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * @Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int len, file_d, written;

	file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	len = _strlen(text_content);
	written = write(file_d, text_content, len);
	if (written == -1)
		return (-1);
	return (1);
}
