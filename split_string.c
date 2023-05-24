#include "main.h"

/**
 * _get_array - splits a string and returns
 * an array of each word of the string
 * @str: is the string input
 * @delimiter: is the character used to seperate words
 * Return: an array of each word of the str
 */

char *_get_array(char *str, char *delimiter)
{
	char *value;

	if (delimiter == " " || delimiter == '\n' || delimiter == '\t')
	{
		value = strtok(str, delimiter);
		while (value != NULL)
		{
			value = strtok(NULL, delimiter);
		}
	}

	return (value);
}


