#include "main.h"

/**
 * check_arg_count - check number of arguments provided
 * @ac: arg count to be checked
 * Return: void
 */
void check_arg_count(int ac)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


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
void _close(int fd)
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

	check_arg_count(ac);
	buff = create_buff(av[2]);
	from = open(av[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buff);
	_close(from);
	_close(to);

	return (0);
}

