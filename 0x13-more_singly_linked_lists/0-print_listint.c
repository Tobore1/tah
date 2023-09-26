#include "lists.h"

/**
 * print_listint - displays the contents of a linked list
 * @g: linked list of type listint_t to be displayed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *g)
{

	size_t number;
		number= 0;

	while (g)
	{
		printf("%d\n", g->n);
		number++;
		g= g->next;
	}


	return (number);
}

