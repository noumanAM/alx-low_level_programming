#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	char	k;

	k = '0';
	while (k <= '9')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
