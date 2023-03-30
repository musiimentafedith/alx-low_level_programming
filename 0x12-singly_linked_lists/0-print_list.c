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

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n")
		}
		printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		h = h->next;
	}
	return (count);
}
