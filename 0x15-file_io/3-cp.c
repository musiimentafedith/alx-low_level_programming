#include"main.h"

/**
 * _close - closes an open file
 * @fd: fd for file to be closed
 * Return: void
 */
void _close(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd);
	}
}

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
 * main - copies the content of a file to another file
 * @av: array of pointers
 * @ac: argument count
 * Return: an int
 */
int main(int ac, char **av)
{
	int file_d_from, file_d_to, read_from, written_to;
	char *buff;

	check_arg_count(ac);
	file_d_from = open(av[1], O_RDONLY);
	if (file_d_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	read_from = read(file_d_from, buff, 1024);
	if (read_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_d_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_d_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (read_from > 0)
	{
		written_to = write(file_d_to, buff, 1024);
		if (written_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		read_from = read(file_d_from, buff, 1024);
	}
	_close(file_d_from);
	_close(file_d_to);
	return (1);
}
