#include "lists.h"
#include <stdlib.h>  /* Include to use free */

/**
 * pop_listint - deletes the head node of a listint_t linked list and 
 * returns its data.
 * @head: pointer to the pointer to the head of the list
 * 
 * Return: the head node’s data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}

