#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0, n;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			int k;
			char *str;

			str = argv[n];
			for (k = 0; str[k] != '\0'; k++)
			{
				if (str[k] < 48 || str[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (n = 1; n < argc; n++)
	{
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
