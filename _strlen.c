#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: is the input string
 * Return: length of the string str.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

