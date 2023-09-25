#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    unsigned long node_count = 0;

    while (h != NULL)
    {
        if (h->str != NULL)
        {
            printf("[%lu] %s\n", (unsigned long)h->len, h->str);
            printf("-> %lu elements\n", node_count);
            printf("(%lu chars long)\n", (unsigned long)h->len);
        }
        else
        {
            printf("[0] (nil)\n");
            printf("-> %lu elements\n", node_count);
        }

        h = h->next;
        node_count++;
    }

    return node_count;
}
