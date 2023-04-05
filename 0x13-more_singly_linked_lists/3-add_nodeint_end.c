#include "lists.h"

/**
 * add_nodeint_end -adds a node at the end of alinked list
 * @head: points to the first element in the list
 * @n: data to insert in the new elemnt
 *
 * Return: point to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	listint_t *temp = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newnode;

	return (newnode);
}
