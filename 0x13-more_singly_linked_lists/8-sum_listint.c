#include "lists.h"


int sum_listint(listint_t *head)
{
	int s;
	listint_t *tem = head;
	s=0;
	while (tem)
	{
		s += tem->n;
		tem = tem->next;
	}

	return (s);
}
