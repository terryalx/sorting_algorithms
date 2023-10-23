#include "sort.h"

/**
 * swap - swap two nodes in a doubly-linked list
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

/**
 * insertion_sort_list - perform an insertion sort on a
 * doubly-linked list
 * @list: pointer to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (head == NULL)
	{
		return;
	}
	if (*head == NULL)
	{
		return;
	}
	if ((*head)->next == NULL)
	{
		return;
	}
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}

	}
}
