#include"main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t  no_letters = 0;
	char ch;
	size_t i;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	for (i = 0; i < letters; i++)
	{
		ch = fgetc(fp);
		if (ch == -1)
			break;
		write(STDOUT_FILENO, &ch, 1);
		no_letters++;
	}
	return (no_letters);
}
