/**
 * _strlen - function that returns the length of a string.
 * @s: arg 1.
 * Return: the length of a string.
 */
int _strlen(char *N)
{
	int	A;

	A = 0;
	while (N[A])
		A++;
	return (A);
}
