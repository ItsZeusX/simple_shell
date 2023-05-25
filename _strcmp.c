#include "main.h"

/**
 * _strcmp - function comparing two strings
 * @varname: char
 * @dirname: char
 * Return: 1
 */

int _strcmp(char *varname, char *dirname)
{
	int j;

	for (j = 0; dirname[j] != '\0'; j++)
	{
		if (dirname[j] != varname[j])
			return (0);
	}
	return (1);
}
