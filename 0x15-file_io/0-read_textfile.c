#include"main.h"
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int count;
	char ch;
	FILE *fp;

	count = 0;
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	ch = getc(fp);
	while (count < letters && !feof(fp))
	{
		_putchar(ch);
		count++;
		ch = getc(fp);
	}
	fclose(fp);
	return (count);
}
