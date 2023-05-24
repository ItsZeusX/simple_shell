#include "main.h"

/**
 * main - Entry point
 *
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 *
 * Return: Always 0 (success)
 */

int main(int ac __attribute__((unused)), char **av)
{

	int i;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
