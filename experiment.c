#include "main.h"

/**
 * main - prints "$ ", wait for the user
 * to enter a command, prints it on the next line
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 *
 * Return: Always 0 (success)
 */

int main(int ac __attribute__((unused)), char **av)
{
	(void) av;
	size_t n = 0;
	char *lineptr = NULL, *path_name = NULL, *copy_path = NULL;/* *exiting = "Quitting the shell...\n";*/
	int len, x = 1, i = 0;
	char buf[1000];
	char *words, *path, *argv[20] = {NULL};
	
	getline(&lineptr, &n, stdin);
	len = _strlen(lineptr) - 1;
	strncpy(buf,lineptr,len);
	buf[len] = '\0';
	
	path = getenv("PATH");
	words = strtok(buf, " \n");
	path_name = strtok(path, ":");

	for (; words != NULL; )
	{

		while (words[i] != '\0')
		{
			i++;
		}
		words[i] = '\0';

		if (argv[0] == NULL)
		{
			argv[0] = (char *) malloc(sizeof(char) * i);
			while (path_name != NULL)
			{
				copy_path = (char *) malloc(sizeof(char) * (_strlen(path_name) + _strlen(words) + 2));
				strcpy(copy_path, path_name);
				copy_path = strdup(path_name);
				strcat(copy_path, "/");
				strcat(copy_path, words);
				strcat(copy_path, "\0");
				if (access(copy_path, X_OK) == 0)
				{
					strcpy(argv[0], copy_path);
					break;
				}
				else
				{
					free(copy_path);
					copy_path = NULL;
					path_name = strtok(NULL, ":");
				}
			}

		}
		else
		{
			argv[x] = (char *) malloc(sizeof(char) * i);
			strcpy(argv[x], words);
			x++;
			words = strtok(NULL, ":");
		}

		words = strtok(NULL, ":");
	}
	argv[x] = NULL;
	
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

	free(lineptr);
	
	return (0);
}
