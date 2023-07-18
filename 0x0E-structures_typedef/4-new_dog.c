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

	max->name = malloc(sizeof(char) * (len + 1));

	if ((max->name) == NULL)
	{
		free(max->name);
		free(max);
		return (NULL);
	}
        
	len = 0;
	for (i = 0; owner[i]; i++)
	{
		len++;
	}

	max->owner = malloc(sizeof(char) * (len + 1));

	if ((max->owner) == NULL)
	{
		free(max->name);
		free(max->owner);
		free(max);
		return (NULL);
	}

	max->name = _strcpy(max->name, name);
	max->age = age;
	max->owner = _strcpy(max->owner, owner);

	return (max);
}
/**
 * _strcpy - copies dest string to src string
 * @dest: destination string
 * @src: source string
 *
 * Return: result of copied string from src
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;
         
        if (src == NULL)
	{
	return (NULL);
	}	
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
		len++;
	}
        dest[len] = '\0';
	return (dest);
}

