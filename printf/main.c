#include <limits.h>
#include <stdio.h>
#include "main.h"
#include<stdarg.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *x;
	char *y;
	int len1, len2;

	int r = -556;
	x = "Good is great";
	y = "odith";
	len1 = myprintf("%s", x);
	printf("\n");
	len2 = myprintf("%s", y);
	printf("\n");
	myprintf("LENGTH %d, %d", len1, len2);
	printf("\n");
	myprintf("%d", r);
	printf("\n");
	myprintf("hello word");
	printf("\n");
	myprintf("%");
	return (0);
}
