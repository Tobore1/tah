#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @g: pointer to the list_t list
 *
 * Return: number of elements in h
 */
/*
 * step in used
 *size_t list_len(const list_t *g)
{
 size_t n = 0;Initialize a counter variable.
 while (g)While there are nodes in the list.
 {
 n++;Increment the counter.
 g = g->next;Move to the next node.
 }
 return (n);Return the total count.
 *
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

