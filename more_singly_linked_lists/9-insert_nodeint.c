#include "lists.h"
#include <stdlib.h> /* Include stdlib.h for malloc and free */

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: the index where the new node should be inserted
 * @n: the data to be added in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *new_node, *temp;
  unsigned int i;

  if (head == NULL)
    return (NULL);

  /* Create the new node */
  new_node = malloc(sizeof(listint_t));
  if (new_node == NULL)
    return (NULL);
  new_node->n = n;
  new_node->next = NULL;

  /* If inserting at index 0 (beginning of the list) */
  if (idx == 0)
  {
    new_node->next = *head;
    *head = new_node;
    return (new_node);
  }

  /* Traverse the list to find the position for insertion */
  temp = *head;
  for (i = 0; i < idx - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }

  /* If we've reached the desired position */
  if (temp == NULL)
  {
    free(new_node);
    return (NULL); /* Index is out of bounds */
  }

  /* Insert the node */
  new_node->next = temp->next;
  temp->next = new_node;

  return (new_node);
}

