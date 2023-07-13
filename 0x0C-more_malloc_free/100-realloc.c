#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates new memory
 * @ptr: pointer to be reallocated memory;
 * @new_size: new bytes to be added to memory
 * @old_size: initial bytes of ptr
 *
 * Return: pointer to memory
 */
void *_realloc(void *ptr, unsigned int new_size, unsigned int old_size)
{       
        void *nmem;
        int nmemsize;
        if (new_size > old_size)
        {       
                nmemsize = old_size;
                return (ptr);
        }       
        else if (new_size == old_size)
        {       
                return (ptr);
        }       
        else if (ptr == NULL)
        {       
                nmem = malloc(new_size);
                return (nmem);
                free(nmem);
        }       
        else if (new_size == 0 && ptr != NULL)
        {       
                return (NULL);
                free(ptr);
        }
	else
	{
		nmemsize = old_size + new_size;
		nmem = realloc(ptr, nmemsize);
		return (nmem);
		free(nmem);
	}
}

