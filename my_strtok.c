#include "main.h"

/**
 * _strtok - tokenizes a string
 * @str: is the input string to be tokenized
 * @delim: are the delimiters to be used
 * Return: an array of the tokens
 */

char *_strtok(char *str, const char *delim)
{
	static char *buf;
	char *b, *value;
	const char *d;

	if (str != NULL)
		buf = str;
	if (buf[0] == '\0')
		return (NULL);
	value = buf;

	for (b = buf; *b != '\0'; b++)
	{
		for (d = delim; *d != '\0'; d++)
		{
			if (*b == *d)
			{
				*b = '\0';
				buf = b + 1;

				if (b == value)
				{
					value++;
					continue;
				}
				return (value);
			}
		}
	}
	buf = b;
	return (value);
}
