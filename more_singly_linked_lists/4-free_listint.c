#include "lists.h"
#include <stdlib.h>  /* Include this to use free */

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

