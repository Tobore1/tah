#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *g)
{
 size_t si = 0;

 while (g)
 {
 if (!g->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", g->len, g->str);
 g = g->next;
 si++;
 }

 return (si);
}

