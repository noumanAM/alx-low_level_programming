#include "main.h"

/**
 * is_palindrome2 - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @n: Arg 1.
 * @x: Arg 2.
 * @f: Arg 3.
 * Return: 1 or 0;
 */
int is_palindrome2(char *n, int x, int f)
{
	if (n[x] != n[f])
		return (0);
	if (x >= f)
		return (1);
	return (is_palindrome2(n, x + 1, f - 1));
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @n: Arg 1.
 * Return: 1 or 0.
 */
int is_palindrome(char *n)
{
	return (is_palindrome2(n, 0, strlen(n) - 1));
}
