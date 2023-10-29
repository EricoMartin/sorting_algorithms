#include "sort.h"

/**
 * insertion_sort_list - A function that sorts a doubly
 * linked list of integers in ascending order
 *
 * @list: A doubly linked list
 *
 * Returns: Nothing
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp;


	if (!list)
		return;

	for (curr = *list; curr; curr = curr->next)
	{
		while (curr->next && (curr->next->n < curr->n))
		{
			temp = curr->next;
			curr->next = temp->next;
			temp->prev = curr->prev;

			if (curr->prev)
				curr->prev->next = temp;

			if (temp->next)
				temp->next->prev = curr;

			curr->prev = temp;
			temp->next = curr;

			if (temp->prev)
				curr = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
	}
}
