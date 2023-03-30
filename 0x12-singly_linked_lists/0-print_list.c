#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	list_t ptr = NULL;

	if (h == NULL)
		return (0);
	prt = h;
	while (ptr != NULL)
	{
		printf("[%u] %s", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
