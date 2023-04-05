#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: points to the first element
 *
 * Return: returns the deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (num);
}
