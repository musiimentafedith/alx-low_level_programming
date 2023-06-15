#include"lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head node
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
