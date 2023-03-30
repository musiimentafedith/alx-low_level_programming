#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: string
 * Return: adress to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
