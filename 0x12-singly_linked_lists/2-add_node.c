#include "lists.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first list element
 * @str: string to be dded to the list
 * Return: adress of the added element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	unsigned int len;

	/*get str length*/
	len = 0;
	while (str != NULL)
	{
		len++;
	}
	/*use malloc to create memory of another element*/
	ptr = malloc(sizeof(list_t));
	if (ptr->str == NULL)
		return (NULL);
	/*put values to the node created*/
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
