#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int	E;

	E = '0';
	while (E <= '9')
	{
		putchar(E);
		E++;
	}
	putchar('\n');
	return (0);
}
