#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: stored char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ptr[x] = c;
	ptr[x] = '\0';
	return (ptr);
}
