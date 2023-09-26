#include "lists.h"
/**
 ** add_nodeint_end - Appends a node to the end of a linked list
 * @head: Pointer to the initial element in the list
 * @n: Data to be inserted into the new element
 *
 * Return: Pointer to the new node, or NULL in case of failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *rec;
	listint_t *tem = *head;

	rec = malloc(sizeof(listint_t));
	if (!rec)
		return (NULL);
	rec->n = n;
	rec->next = NULL;

	if (*head == NULL)
	{
	
		*head = rec;
		return (rec);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = rec;
	return (rec);
}
