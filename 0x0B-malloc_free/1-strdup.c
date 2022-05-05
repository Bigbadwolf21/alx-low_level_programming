#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of char
 */
char *_strdup(char *str)
{
	int x, y;
	char *new_str;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		;
	new_str = malloc(sizeof(char) * (x + 1));
	if (!new_str)
		return (NULL);
	for (y = 0; y <= x; y++)
		new_str[y] = str[y];
	new_str[y + 1] = '\0';
	return (new_str);
}
