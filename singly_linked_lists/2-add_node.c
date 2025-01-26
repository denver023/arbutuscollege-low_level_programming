#include <stdlib.h>
#include <string.h>  /* Include this to use strdup */
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: pointer to the first node in the list
 * @str: string to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->str = strdup(str); /* This will now work as strdup is declared */
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

