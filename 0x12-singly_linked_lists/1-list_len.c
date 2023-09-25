#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @g: pointer to the list_t list
 *
 * Return: number of elements in the list
 * more explanation
 * Initialize a counter variable.
 * While there are nodes in the list
 * Increment the counter
 * Move to the next node
 * Return the total coun
 */
size_t list_len(const list_t *g)
{
    size_t n = 0;

    while (g)
    {
        n++;
        g = g->next;
    }

    return (n);
}
