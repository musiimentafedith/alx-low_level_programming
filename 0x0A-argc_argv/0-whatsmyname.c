#include<stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
