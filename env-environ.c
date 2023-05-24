#include "main.h"

/**
 * main - prints the environment using the global variable environ
 *
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 *
 * Return: Always 0 (success)
 */

int main(int ac, char **av)
{
	extern char **environ;

	unsigned int i;

	i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
