#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct with dog information
 * Description: a struct with dog information
 * @name: anem of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 * Return: (void)
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
