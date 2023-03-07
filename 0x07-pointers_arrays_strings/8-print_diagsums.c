#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 = sum1 + a[i][j];
			}
			if (j + i == size)
			{
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d,%d", sum1, sum2);
}
