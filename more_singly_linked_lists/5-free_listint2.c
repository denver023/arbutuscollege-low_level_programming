#include "lists.h"
#include <stdlib.h>  /* Include this to use free */

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to the pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

