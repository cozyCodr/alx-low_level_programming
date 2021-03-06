#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints sum of arguments
 * @argc: number of arguments passed
 * @argv: array of string arguments
 * Return: 0 if run without errors
 */
int main(int argc, char **argv)
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", sum);
			return (0);
		}
		else if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
