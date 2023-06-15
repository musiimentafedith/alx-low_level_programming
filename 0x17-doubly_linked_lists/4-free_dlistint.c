#include"lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
