#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head
 * Return: sum of all int `n`, if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *c;

	for (sum = 0, c = head; c != NULL; c = c->next)
		sum += c->n;

	return (sum);
}
