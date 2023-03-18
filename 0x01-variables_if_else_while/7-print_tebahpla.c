#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	char	F;

	F = 'z';
	while (F >= 'a')
	{
		putchar(F);
		F--;
	}
	putchar('\n');
	return (0);
}
