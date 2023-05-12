#include "main.h"

/**
 * create_buff - create buffer
 * @file: The name of the file
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes a file
 * @fd: The file descriptor for file to be close.
 * Return: void
 */
void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments supplied to the program
 * @av: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int from, to, rd, wr;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(av[2]);
	from = open(av[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, r);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

