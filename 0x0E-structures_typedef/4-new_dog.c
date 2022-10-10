#include <stdlib.h>
#include <stdio.h>
#include "dog.c"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		return (NULL);
	(*Dog).name = name;
	Dog->age = age;
	(*Dog).owner = owner;

	return (Dog);
}
