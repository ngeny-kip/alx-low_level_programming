#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: points to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
