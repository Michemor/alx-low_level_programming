#pragma once
/**
 * struct dog - information about a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * 
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

