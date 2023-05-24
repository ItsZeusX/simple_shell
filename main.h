#ifndef MAIN_H
#define MAIN_H

/* standard library */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdbool.h>

/**
 * _strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src);

/**
 * _strlen - returns the length of a string
 * @str: is the input string
 * Return: length of the string str.
 */

int _strlen(char *str);

/**
 * _strdup - duplicates a string using dynamic memory
 * @str: is the input string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str);

/**
 * _strcpy - copies a string
 * @dest: is the destination
 * @src: is the string to be copied
 * Return: void
 */

void _strcpy(char *dest, char *src);

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

ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

/**
 * _strtok - tokenizes a string
 * @str: is the input string to be tokenized
 * @delim: are the delimiters to be used
 * Return: an array of the tokens
 */

char *_strtok(char *str, const char *delim);


/**
 * tokenize - breaks command line args into words
 * @av: is the args vector
 * @word_count: is the number of words
 * @lineptr_copy: is the copy of the input args
 * @word: broken down command args
 *
 */

int tokenize(char **av, int word_count, char *lineptr_copy, char *word);

/**
 * handle_path - handles the PATH variable
 * @terminalcmd: is the terminal command
 * Return: pointer to the terminalcmd
 */
char *handle_path(char *terminalcmd);


#endif /* main.h file */
