#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	*_strdup(char *str)
{
	char	*str1;
	size_t	k;

	if (!str)
		return (0);
	str1 = malloc(strlen(str) + 1);
	k = 0;
	if (!str1)
		return (0);
	while (k < strlen(str))
	{
		str1[k] = str[k];
		k++;
	}
	str1[strlen(str)] = '\0';
	return (str1);
}
