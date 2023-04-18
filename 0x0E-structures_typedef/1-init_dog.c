#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to name of dog
 * @age: age to init
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
