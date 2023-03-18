#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (i != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
