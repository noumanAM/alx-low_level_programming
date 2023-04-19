#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  *print_dog - prints a struct dog.
  *@k: pointer to struct.
  *
  *Return: void.
  */
void print_dog(struct dog *k)
{
	if (k == 0)
	{
		return;
	}
	else
	{
		if (k->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", k->name);

		printf("Age: %f\n", k->age);

		if (k->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", k->owner);
	}
}
