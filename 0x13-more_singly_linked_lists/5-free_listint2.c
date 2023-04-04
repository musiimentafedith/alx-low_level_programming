#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;

	new = *head;
	while (new != NULL)
	{
		temp = new;
		new = new->next;
		free(temp);
		*head = NULL;
	}
}


