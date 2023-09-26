#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *last = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		i++;
	}

	
	last = tem->next;
	tem->next = last->next;
	free(last);
	}
	return (1);
}
