#include "main.h"

/**
 * length - function checks the number of characters
 * @str: is a char
 * Return: str
 */

char *length(char *str)
{
	int n;

	for (n = 0; str[n] != '='; n++)
		;
	return (str + n + 1);
}
