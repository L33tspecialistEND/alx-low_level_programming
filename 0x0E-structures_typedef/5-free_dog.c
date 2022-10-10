#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- Frees memory allocated to struct dog
 * @d: Pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free(d->age);
		free((*d).owner);
	}
}
