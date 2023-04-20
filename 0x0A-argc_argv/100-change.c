#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function.
 * @ac: arg 1.
 * @av: arg 1.
 * Return: 0 if the program finish whitout errors.
 */
int	main(int ac, char **av)
{
	int	resu;
	int	amount;
	int	w[] = {25, 10, 5, 2, 1};
	int	n;

	resu = 0;
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(av[1]);
	n = 0;
	while (n < 5)
	{
		while (amount >= w[n])
		{
			amount -= w[n];
			resu++;
		}
		n++;
	}
	printf("%d\n", resu);
	return (0);
}

