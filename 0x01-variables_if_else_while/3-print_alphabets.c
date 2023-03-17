#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	char	b;

	b = 'a';
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\b');
	return (0);
}
