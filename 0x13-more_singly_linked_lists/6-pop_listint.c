#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int number;
	 number = (*head)->n;
	if (!head || !*head)
	{
		return (0);
	}
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (number);
}

