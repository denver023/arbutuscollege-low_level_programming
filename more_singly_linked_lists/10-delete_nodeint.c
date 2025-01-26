#include "lists.h"
#include <stdlib.h> /* Include stdlib.h for malloc and free */

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: double pointer to the first node in the list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    /* If deleting the first node (index 0) */
    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }

    /* Traverse the list to find the node to delete */
    for (i = 0; current != NULL && i < index - 1; i++)
    {
        current = current->next;
    }

    /* If index is out of bounds (current is NULL) */
    if (current == NULL || current->next == NULL)
        return (-1);

    /* Delete the node at the given index */
    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

