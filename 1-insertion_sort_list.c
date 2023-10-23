#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked
 * list of integers in ascending order
 * using the Insertion sort algorithm.
 * @list: Double linked list.
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = *list;
	listint_t *prevPrevNode, *prevNode, *currentNode, *nextNode;

	while (current)
	{
		if (current->prev && current->prev->n > current->n)
		{
			prevPrevNode = current->prev->prev;
			prevNode = current->prev;
			currentNode = current;
			nextNode = current->next;

			prevNode->next = nextNode;

			if (nextNode)
				nextNode->prev = prevNode;

			currentNode->prev = prevPrevNode;
			currentNode->next = prevNode;

			if (prevPrevNode)
				prevPrevNode->next = currentNode;
			else
				*list = currentNode;

			prevNode->prev = currentNode;
			current = *list;
			print_list(*list);
			continue;
		}
		else
			current = current->next;
	}
}

