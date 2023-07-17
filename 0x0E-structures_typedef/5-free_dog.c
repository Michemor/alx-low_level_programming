#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory allocated to dog_t
 * @d: dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
