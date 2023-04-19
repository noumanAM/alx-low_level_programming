#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - a function that frees dogs.
  *@k: pointer to dog struct.
  *
  *Return: void.
  */
void free_dog(dog_t *k)
{
	if (k == 0)
		return;
	free(k->name);
	free(k->owner);
	free(k);
}
