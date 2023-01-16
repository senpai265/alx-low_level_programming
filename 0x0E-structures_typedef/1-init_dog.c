#include "dog.h"
#include<stdlib.h>

/**
* int_dog - inits a variable of
* type dog
* @d: dog identification
* @name: name of dog
* @age: age of dog
* @owner: owner's name
* 
* Description: Long
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d - mallo(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
