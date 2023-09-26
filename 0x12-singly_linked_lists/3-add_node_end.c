
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
 list_t *rec;
 list_t *tem = *head;
 unsigned int len = 0;

 while (str[len])
 len++;

 rec = malloc(sizeof(list_t));
 if (!rec)
 return (NULL);

 rec->str = strdup(str);
 rec->len = len;
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
