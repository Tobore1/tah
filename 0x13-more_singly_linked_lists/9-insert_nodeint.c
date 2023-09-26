#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *rec;
	listint_t *tem = *head;

	rec = malloc(sizeof(listint_t));
	if (!rec || !head)
		return (NULL);

	rec->n = n;
	rec->next = NULL;

	if (idx == 0)
	{
		rec->next = *head;
		*head = rec;
		return (rec);
	}
	
	for ( i =0; tem && i < idx; i++)
	{
		if (i == idx - 1)
		{
			rec->next = tem->next;
			tem->next = rec;
			return (rec);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}

