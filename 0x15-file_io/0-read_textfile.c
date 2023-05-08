#include"main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t  no_letters;
	char *file = NULL;
	ssize_t no_letters_read;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);
	no_letters_read = read(fd, file, letters);
	if (no_letters_read == -1)
		return (0);
	no_letters = write(STDOUT_FILENO, file, no_letters_read);
	if (no_letters == -1)
		return (0);
	free(file);
	close(fd);
	return (no_letters);
}
