#include "main.h"

/**
 * _getenv - function gets the path in the environment
 * @environ: global variable
 * @dirname: char
 * Return: final or null
 */

char *_getenv(char **environ, char *dirname)
{
	int n, m;
	char *varname, *final;

	for (m = 0; environ[m]; m++)
	{
		varname = malloc(1024);

		for (n = 0; environ[m][n] != '='; n++)
			varname[n] = environ[m][n];

		if (_strcmp(varname, dirname))
		{
			final = length(environ[m]);
			free(varname);
			return (final);

		}
		free(varname);
	}
	return (NULL);
}
