#include "sort.h"

/**
 * swap - doubly-linked list swaps two elements
 * @a: first node
 * @b: second node
 *
 * Return: void
 */
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
	{
		a->prev->next = b;
	}
	if (b->next)
	{
		b->next->prev = a;
	}
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;

}
