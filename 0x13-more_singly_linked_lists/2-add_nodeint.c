#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a connected list
 * @head: pointer at the unused node in the list
 * @n: data to insert in that unused node
 *
 * Return: pointer to the new node, or NULL its unsuccesful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
