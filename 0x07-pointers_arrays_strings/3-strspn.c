#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0') /*Declare WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declare WHILE *accept */
		{
			if (str2[j] == str1[i]) /*check condition */
			{
				count++; /*count number */
				break;
			}

			j++;    /*increments j by 1 */
		}

		if (s[i] != accept[j]) /*If not equals */
		{
			break;
		}

		i++; /* increments i by 1 */
	}

	return (count); /*return the value of count */
}
