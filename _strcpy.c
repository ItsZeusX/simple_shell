#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: is the destination
 * @src: is the string to be copied
 * Return: void
 */

void _strcpy(char *dest, char *src)
{
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}

}
