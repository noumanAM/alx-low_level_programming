#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - concatenates 2 strings.
  * a NULL string is treated as an empty string.
  *@S1: pointer to string.
  *@S2: pointer to string.
  *
  *Return: pointer to newly allocated memory which
  *has S1, S2 and null byte.
  *NULL on failure.
  */
char *str_concat(char *S1, char *S2)
{
	unsigned int len1, len2, size, K, F;
	char *nstr;

	if (S1 == NULL)
		S1 = "";
	if (S2 == NULL)
		S2 = "";

	len1 = 0;
	while (S1[len1] != '\0')
		len1++;
	len2 = 0;
	while (S2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/*check if malloc was successful */
	if (nstr == NULL)
		return (NULL);

	K = 0;
	while (K < len1)
	{
		nstr[K] = S1[K];
		K++;
	}
	F = 0;
	while (K <= size)
	{
		nstr[K] = S2[F];
		K++;
		F++;
	}
	return (nstr);
}
