#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the first node in the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    size_t len = 0;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    /* Duplicate the string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Calculate the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    new_node->len = len;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Traverse to the last node */
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        /* Link the last node to the new node */
        temp->next = new_node;
    }

    return (new_node);
}

