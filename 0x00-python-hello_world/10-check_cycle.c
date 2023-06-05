#include "lists.h"

/**
 * check_cycle - checks to see if a list has a cycle
 * @list: list to check for a a cycle
 * Return: 0 if no cycle is present, 1 if a cycle is present
 */

int check_cycle(listint_t *list)
{
	listint_t *x = list, *y = list;

	if (list == NULL)
		return (0);

	while (x && x->next)
	{
		y = y->next;
		x = x->next->next;

		if (x == y)
			return (1);
	}
	return (0);
}
