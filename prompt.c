#include "main.h"
/**
 * main - prints "$ ", wait for the user
 * to enter a command, prints it on the next line
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 * Return: Always 0 (success)
 */
int main(int ac __attribute__((unused)), char **av)
{
	(void) av;
	char *lineptr = NULL, *prompt = "(OurTerm) $ ";
	char *exiting = "exiting the terminal...\n";
	char *lineptr_copy = NULL;
	size_t n = 0;
	char *word;
	int word_count = 0;
	ssize_t bytes_read;

	while (true)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		bytes_read = getline(&lineptr, &n, stdin);

		if (bytes_read == -1)
		{
			write(STDOUT_FILENO, exiting, _strlen(exiting));
			return (-1);
		}
		lineptr_copy = (char *) malloc(sizeof(char) * bytes_read);
		if (lineptr_copy == NULL)
		{
			perror("Cannot allocate memory");
			return (-1);
		}
		_strcpy(lineptr_copy, lineptr);
		word = strtok(lineptr, " \n");

		while (word != NULL)
		{
			word_count++;
			word = strtok(NULL, " \n");
		}
		word_count++;
		tokenize(av, word_count, lineptr_copy, word);
	}
	free(lineptr_copy);
	free(lineptr);
	return (0);
}
