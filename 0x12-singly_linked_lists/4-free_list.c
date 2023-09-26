#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
 list_t *tem;

 while (head)
 {
 tem = head->next;
 free(head->str);
 free(head);
 head = tem;
 }
}
