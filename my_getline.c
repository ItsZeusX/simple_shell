#include "main.h"

/**
 * _getline - reads  an  entire line from stream,
 * storing the address of the buffer
 * containing the text into *lineptr
 * The buffer is null-terminated
 * @lineptr: is a pointer to the first character
 * @n: is a pointer to the size variable
 * @stream: is the input file handle
 * Return: the number of character read
 */

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int i;

	stream = getchar();

	for (i = 0; i < n - 1 && (stream != EOF) && (stream != '\n'); i++)
	{
		lineptr[i] = stream;
	}
	if (stream == '\n')
	{
		lineptr[i] = stream;
		i++;
	}

	lineptr[i] = '\0';
	return (i);
}


