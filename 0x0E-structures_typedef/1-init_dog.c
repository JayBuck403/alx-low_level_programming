#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
