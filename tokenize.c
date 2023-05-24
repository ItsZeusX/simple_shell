#include "main.h"

/**
 * tokenize - breaks command line args into words
 * @av: is the args vector
 * @word_count: is the number of words
 * @lineptr_copy: is the copy of the input args
 * @word: broken down command args
 */
void tokenize(char **av, int word_count, char *lineptr_copy, char *word)
{
	char *terminalcmd = NULL;

	int i;

	pid_t child;

	av = malloc(sizeof(char *) * word_count);

	word = strtok(lineptr_copy, " \n");
	for (i = 0; word != NULL; i++)
	{
		av[i] = malloc(sizeof(char) * _strlen(word));
		_strcpy(av[i], word);
		word = strtok(NULL, " \n");
	}
	av[i] = NULL;

	terminalcmd = handle_path(av[0]);

	child = fork();
	if (child == 0)
	{
		if (execve(terminalcmd, av, NULL) == -1)
		{
			perror("Error");
		}
	}
	else
	{
		wait(NULL);
	}
}

