#include "lists.h"

/**
 * sum_listint - works out the sum of all the infomation in a listint_t list
 * @head: first node in the connected list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
