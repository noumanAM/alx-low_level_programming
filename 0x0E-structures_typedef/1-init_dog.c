#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - initializes a variable of type struct dog.
  *@k: pointer to structure.
  *@name: first member.
  *@age: second member.
  *@owner: third member.
  *
  *Return: void.
  */
void init_dog(struct dog *k, char *name, float age, char *owner)
{
	if (k == 0)
		return;

	k->name = name;
	k->age = age;
	k->owner = owner;
}

