#include "lists.h"


/**
 * free_listint2 - This frees a list.
 * @head: The Address of the first node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
