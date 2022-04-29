#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        putchar(*s);
        _put_recursion(s + 1);
    }
    else
    {
        _putchar('\n')
    }
}

