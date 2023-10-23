#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double linked llist
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prevprev, *prevv, *curr1, *currentNext;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = *list;

	while (current)
	{
		if (current->prev && current->prev->n > current->n)
		{
			prevprev = current->prev->prev;
			prevv = current->prev;
			curr1 = current;
			currentNext = current->next;

			prevv->next = currentNext;

			if (currentNext)
			{
				currentNext->prev = prevv;
			}

			curr1->prev = prevprev;
			curr1->next = prevv;

			if (prevprev)
			{
				prevprev->next = curr1;
			}
			else
			{
				*list = curr1;
			}
			prevv->prev = curr1;
			current = *list;
			print_list(*list);
			continue;
		}
		else
			current = current->next;
	}
}
