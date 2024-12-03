#include <stdlib.h>
#include <string.h>
#include "dog.h"

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
	name_copy = malloc(strlen(name) + 1);
	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	/* Allocate and copy owner */
	owner_copy = malloc(strlen(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	/* Initialize the dog structure */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}

