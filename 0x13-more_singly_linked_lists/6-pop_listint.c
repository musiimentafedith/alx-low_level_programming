#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to a pointer
 * Return: deleted node value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *tmp = NULL;
	int y;

	tmp = *head;
	if (tmp == NULL)
	{
		return (0);
	}
	else
	{
		/*store head node data in valuable y*/
		y = tmp->n;
		/*store head node adress in pointer variable temp*/
		temp = tmp;
		/*shift head to point to the second node*/
		*head = tmp->next;
		/*free head node*/
		free(temp);
	}
	return (y);
}
