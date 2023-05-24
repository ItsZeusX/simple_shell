#include "main.h"

/**
 * _strdup - duplicates a string using dynamic memory
 * @str: is the input string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dest;

	dest = (char *) malloc(_strlen(str) + 1);

	if (dest != NULL)
		_strcpy(dest, str);

	return (dest);
}
