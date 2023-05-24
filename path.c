#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + len] = src[i];

	}
	dest[i + len] = '\0';

	return (dest);
}
/**
 * handle_path - handles the PATH variable
 * @terminalcmd: is the terminal command
 * Return: pointer to the terminalcmd
 */
char *handle_path(char *terminalcmd)
{
	char *path, *path_duplicate, *word, *command_path;
	struct stat sb;

	path = getenv("PATH");

	if (path)
	{
		path_duplicate = _strdup(path);
		word = strtok(path_duplicate, ":");

		while (word != NULL)
		{
			command_path = malloc(_strlen(word) + _strlen(terminalcmd) + 2);

			_strcpy(command_path, word);
			_strcat(command_path, "/");
			_strcat(command_path, terminalcmd);
			_strcat(command_path, "\0");

			if (lstat(command_path, &sb) == 0)
			{
				free(path_duplicate);
				return (command_path);
			}
			else
			{
				free(command_path);
				word = strtok(NULL, ":");
			}
		}
		free(path_duplicate);

		if (lstat(terminalcmd, &sb) == 0)
		{
			return (terminalcmd);
		}
		return (NULL);
	}
	return (NULL);
}
