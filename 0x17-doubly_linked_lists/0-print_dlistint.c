#include"lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head node
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}
	return (count);
}
