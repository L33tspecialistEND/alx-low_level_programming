#include <stdlib.h>
#include <stdio.h>
#include "dog.c"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: NULL or ndog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *ndog;

	if (name == NULL || owner == NULL)
		return (NULL);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (j = 0; name[j]; j++)
		;
	for (k = 0; owner[k]; k++)
		;
	ndog->name = malloc((j + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < (j + 1); i++)
		ndog->name[i] = name[i];
	ndog->age = age;
	ndog->owner = malloc((k + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < (k + 1); i++)
		ndog->owner[i] = owner[i];
	return (ndog);
}
