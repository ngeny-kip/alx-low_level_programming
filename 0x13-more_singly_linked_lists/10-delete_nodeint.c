#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a  linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while

		(i < index - 1)
		{
			if (!ptr || !(ptr->next))
				return (-1);
			ptr = ptr->next;
			i++;
		}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
