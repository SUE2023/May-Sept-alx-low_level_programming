#include"dog.h"
#include<stdlib.h>
/**
 * init_dog - new dog struct
 * Description: whose variables is to be initialized
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner:name of owner of the dog
 * Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}

