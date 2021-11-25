#include "lists.h"
/*
 => Locates a nth node in a dlistint_t list and
 => Return the address of the located node or NULL - If the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
