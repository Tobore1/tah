#include "lists.h"

/**
 * add_nodeint is a function that inserts a new node at the start of a linked list.

    head: a pointer pointing to the initial node in the list.
    n: the data to be added to the new node.

The function returns a pointer to the newly created node. If the operation fails, it returns NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *rec;

	rec = malloc(sizeof(listint_t));
	if (!rec)
	{
		return (NULL);
	}
	else 
	{
	rec->n = n;
	rec->next = *head;
	*head = rec;
	}
	return (rec);
}

