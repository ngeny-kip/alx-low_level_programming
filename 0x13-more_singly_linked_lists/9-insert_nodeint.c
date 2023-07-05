#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a linked list
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *ptr = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; ptr && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		else
			ptr = ptr->next;
	}

	return (NULL);
}
