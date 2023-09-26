#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i; 
	listint_t *tem = head;
	i=0;
	while (tem && i < index)
	{
		tem = tem->next;
		i++;
	}

	return (tem ? tem : NULL);
}
