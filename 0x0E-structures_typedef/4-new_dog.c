#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - instantiates new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to mem location of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max;

	max = malloc(sizeof(dog_t));
	if (max == NULL)
	{
		free(max);
		return (NULL);
	}
	else
	{
	max->name = name;
	max->age = age;
	max->owner = owner;
	return (max);
	free(name);
	free(owner);
	free(max);
	}
}
