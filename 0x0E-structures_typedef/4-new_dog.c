#include <stdlib.h>
#include <stdio.h>
#include "dog.c"

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
	ndog->name = malloc(j * sizeof(char));
	if (ndog->name == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ndog->name[i] = name[i];
	ndog->age = age;
	ndog-owner = malloc(k * sizeof(char));
	if (ndog->owner == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		ndog->owner[i] = owner[i];
	return (ndog);
}
