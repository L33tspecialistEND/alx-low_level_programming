#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes variable of type struct dog
 * @d: Pointer to variable of type struct dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	(*d).age = age;
	d->owner = owner;

	return;
}
