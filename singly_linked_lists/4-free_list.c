#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head;
	head = head->next;  /* Move the head pointer to the next node */
        free(temp->str);    /* Free the string in the current node */
        free(temp);         /* Free the current node itself */
    }
}

