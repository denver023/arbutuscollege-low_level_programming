#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: Pointer to the first node in the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
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

    /* Calculate the length of the string manually */
    while (str[len] != '\0')
    {
        len++;
    }

    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

