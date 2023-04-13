#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @f: int
 * Return: pointer to the array initialized or null
 */

void *malloc_checked(unsigned int f)
{
	int *m = malloc(f);

	if (m == 0)
		exit(98);

	return (m);
}
