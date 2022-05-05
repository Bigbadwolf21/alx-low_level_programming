#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The string to be concatenated upon
 * @s2: The string to be concatenated to s1
 *
 * Return: If concatenation fails - NULL
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int x, n = 0, length = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] || s2[x]; x++)
length++;
concat = malloc(sizeof(char) * length);
if (concat == NULL)
return (NULL);
for (x = 0; s1[x]; x++)
concat[n++] = s1[x];
for (x = 0; s2[x]; x++)
concat[n++] = s2[x];
return (concat);
}
