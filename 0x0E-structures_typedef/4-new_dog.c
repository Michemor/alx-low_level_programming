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
	int i, len = 0;
	char *maxName;
	char *maxOwner;
	dog_t *max;

	max = malloc(sizeof(dog_t));
	if (max == NULL)
	{
		free(max);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		len++;
	}
	maxName = malloc(sizeof(char) * (len + 1));
	if (maxName == NULL)
	{
		free(maxName);
		return (NULL);
	}
        
	len = 0;
	for(i = 0; owner[i]; i++)
	{
		len++;
	}
	maxOwner = malloc(sizeof(char) * (len + 1));
	if (maxOwner == NULL)
	{
		free(maxOwner);
		return (NULL);
	}

	max->name = _strcpy(maxName, name);
	max->age = age;
	max->owner = _strcpy(maxOwner, owner);

	return (max);
}
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		len++;
	}
        dest[len] = '\0';
	return (dest);
}

