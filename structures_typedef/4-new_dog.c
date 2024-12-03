#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: Length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string to a destination buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog_t structure
 * @name: Pointer to the dog's name
 * @age: Dog's age
 * @owner: Pointer to the dog's owner
 *
 * Return: Pointer to the newly created dog_t structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	if (!name || !owner)
		return (NULL);

	/* Allocate memory for the new dog */
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	/* Allocate and copy name */
	name_copy = malloc(_strlen(name) + 1);
	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(name_copy, name);

	/* Allocate and copy owner */
	owner_copy = malloc(_strlen(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	/* Initialize the dog structure */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}

