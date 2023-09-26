#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
	{
		return;
	}
	else 
	{

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}
	}
	*head = NULL;
}
