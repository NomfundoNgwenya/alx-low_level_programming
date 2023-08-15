#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the content of a struct dog variable
 * @d: Pointer to the struct dog variable to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
		printf("Name: (nil)\n");

		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}