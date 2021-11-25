#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of a
 * doubly linked list
 * @head: a variable of type dlistint_t
 * @n: an integer
 * Return:address of new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;

		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (*head);
}
