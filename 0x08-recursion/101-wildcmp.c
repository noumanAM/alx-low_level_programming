
#include "main.h"

/**
 * wildcmp - compares two strings.
 * @f1: string 1.
 * @f2: string 2. It can contains a * as a special character.
 * Return: 1 if are indentical, 0 if not.
 */
int wildcmp(char *f1, char *f2)
{
	if (*f2 == '*' && *(f2 + 1) != '\0' && *f1 == '\0')
		return (0);
	if (*f1 == '\0' && *f2 == '\0')
		return (1);
	if (*f1 == *f2)
		return (wildcmp(f1 + 1, f2 + 1));
	if (*f2 == '*')
		return (wildcmp(f1, f2 + 1) || wildcmp(f1 + 1, f2));
	return (0);
}
