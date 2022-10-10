#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of struct dog
 * @d: Pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", (*d).name);
		if (d->age == NULL)
			printf("Age: (nil)");
		else
			printf("Age: %6f", d->age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", (*d).owner);
	}
}
