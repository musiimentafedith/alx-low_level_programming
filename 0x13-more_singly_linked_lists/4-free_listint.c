#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	/*check if head is NULL, if yes, meaning the list is empty just return*/
	while (head != NULL)
	{
		/*save head to the temp variable and let head point to the next node*/
		temp = head;
		head = head->next;
		/*free temp and repeart the process*/
		free(temp);
	}
}

