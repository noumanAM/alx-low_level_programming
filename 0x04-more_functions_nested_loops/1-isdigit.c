# include "main.h"

/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Return: Returns 1 if c is a digit, Returns 0 if not
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
