#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declare WHILE */
	{
		j = 0;
		while (accept[j] != '\0')  /* check *accept */
		{
			if (*s == accept[j])
			{
				return (s); /* returns the value of s */
			}

			j++; /* increments j by 1*/
		}

		s++; /* increments s by 1 */
	}
	return (0);

}
