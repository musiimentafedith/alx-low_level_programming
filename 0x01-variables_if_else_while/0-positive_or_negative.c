#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - C Program to generate a random number, and print negative or postive
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand()-RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n",n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n",n);
	}
	else
	{
		printf("%d is zero\n",n);
	}
	return (0);
}
