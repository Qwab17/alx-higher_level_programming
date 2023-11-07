#include "lists.h"
#include <stddef.h>

int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int values[4096];
	int i = 0, j = 0;

	if (!current)
		return (1);

	while (current)
	{
		values[i] = current->n;
		i++;
		current = current->next;
	}

	i--;
	while (j <= i)
	{
		if (values[j] != values[i])
			return (0);
		j++;
		i--;
	}
	return (1);
}
