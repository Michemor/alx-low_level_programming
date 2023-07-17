#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints contents of struct dog
 * @d: type dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
exit(EXIT_FAILURE);
}
else
{
if ((d->name) == NULL)
{
	printf("Name: (nil)");
}
else
{
	printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner ==  NULL)
{
	printf("Owner: (nil)");
}
else
{
	printf("Owner: %s\n", d->owner);
}
}
}
