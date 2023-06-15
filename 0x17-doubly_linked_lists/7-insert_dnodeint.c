#include"lists.h"
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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head node
 * @idx: position to insert the node
 * @n: node data
 * Return: pointer to new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = NULL, *new_next = NULL;
	unsigned int x = 0;
	size_t size;

	size = dlistint_len(temp);
	if (idx > size)
		return (NULL);
	else if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else
	{
		while (x < (idx - 1))
		{
			temp = temp->next;
			x++;
		}
		if (temp->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		new_next = temp->next;
		new->next = temp->next;
		temp->next = new;
		new->prev = temp;
		new_next->prev = new;
		return (new);
	}
}

