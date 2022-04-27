#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declare variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /* values */
		str2 = needle;

		/* declare While loop */
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++; /* increment haystack */
			str2++; /* increment the value of str2 */
		}
		if (*str2 == '\0') 
			return (str1); /* returns the value of str1 */
		haystack = str1 + 1;
	}
	return (0); /* returns null */
}
