#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: head of the list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *key, *select;

	node = *list;
	if (node == NULL)
		return;
	node = node->next;
	while (node)
	{
		key = node;
		select = key->prev;
		node = node->next;
		while (select && (key->n < select->n))
		{
			if (key->next != NULL)
				key->next->prev = select;
			if (select->prev != NULL)
				select->prev->next = key;
			key->prev = select->prev;
			select->next = key->next;
			key->next = select;
			select->prev = key;
			select = key->prev;
			if (key->prev == NULL)
				*list = key;
			print_list(*list);
		}
	}
}
