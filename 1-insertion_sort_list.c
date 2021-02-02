#include "sort.h"

/**
 * insertion_sort_list - insert sort
 * @list: given list
 * Return: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *first, *second;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	first = *list;
	while (first->next != NULL)
	{
		second = first->next;
		while (second->n < first->n)
		{
			first->next = second->next;
			second->next = first;
			second->prev = first->prev;
			first->prev = second;
			if (second->prev != NULL)
				second->prev->next = second;
			else
				*list = second;
			if (first->next != NULL)
				first->next->prev = first;
			print_list(*list);
			if (second->prev != NULL)
				first = second->prev;
			else
				break;
		}
		first = first->next;
	}
}
