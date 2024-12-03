#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name); /* Free the memory allocated for the name */
		free(d->owner); /* Free the memory allocated for the owner */
		free(d); /* Free the structure itself */
	}
}

