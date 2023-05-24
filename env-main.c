#include "main.h"

/**
 * main - prints the environment
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 * @env: is a NULL terminated array of strings
 *
 * Return: Always 0 (success)
 */

int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
