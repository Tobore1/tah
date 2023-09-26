#include "lists.h"

/**
 * 
 * listint_len - Counts the elements in a linked list
 * @g: Pointer to a linked list of type listint_t to traverse
 *
 * then  Return: Number of nodes
 *
 */
size_t listint_len(const listint_t *g)
{
	size_t number; 
		number= 0;

	while (g)
	{
		number++;
		g = g->next;
	}

	return (number);
}

