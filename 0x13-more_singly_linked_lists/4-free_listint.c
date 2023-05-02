#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
