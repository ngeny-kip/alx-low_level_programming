#include "lists.h"

/**
 * prints_dlistint - prints all the elements of a dlistin_t
 *
 * @h: haed of the lists
 * Return: returns no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;

    if (h == NULL)
        return (count);
    while (h -> prev != NULL)
        h = h ->prev;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h -> next;
    }

    return (count);
}
