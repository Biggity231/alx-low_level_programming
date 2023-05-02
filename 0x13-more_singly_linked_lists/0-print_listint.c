#include "lists.h"

/**
 * print_listint - function which prints all the elements of listint_t list
 * @h: header pointer
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cont);
}
