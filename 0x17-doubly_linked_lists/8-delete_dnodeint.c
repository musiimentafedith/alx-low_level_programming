#include"lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer to a pointer to a head node
 * @index: position of node to delet
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (i != index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (1);
}



