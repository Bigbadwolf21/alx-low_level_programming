#include "main.h"

/**
 * _isalpha- checks for alphabetic character
 * @c: c is an ascii character with a value of 99
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
