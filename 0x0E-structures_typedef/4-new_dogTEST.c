#include<stdlib.h>
#include"dog.h"
/**
 * *new_dog - creates a new dog file
 * Description: creates a new dog file
 * @name: new dog name
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t newname, newowner, index;
	dog_t *dog;
	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/* length to assign to new dog name */
	for (newname = 0; name[newname]; newname++)
		;
	newname++;
	dog->name = malloc(newname * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (index = 0; index < newname; index++)
		dog->name[index] = name[index];
	dog->age = age;
	for (newowner = 0; owner[newowner]; newowner++)
		;
	newowner++;
	dog->owner = malloc(newowner * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (index = 0; index < newowner; index++)
		dog->owner[index] = owner[index];
	return (dog);

}
