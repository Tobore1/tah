#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
 list_t *rec;
 unsigned int len;

 while (str[len])
len = 0;	 
 len++;

 rec= malloc(sizeof(list_t));
 if (!rec)
 
 return (NULL);
 
 rec->str = strdup(str);
 rec->len = len;
 rec->next = (*head);
 (*head) = rec;

 return (*head);
}
