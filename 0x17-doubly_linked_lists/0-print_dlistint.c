#include "lists.h"
#include <stdio.h>

/**
* prints all the elements of a dlistint_t list
*/
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
