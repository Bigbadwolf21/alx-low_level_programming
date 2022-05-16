#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valst;
	unsigned int x;
	char *string;

	va_start(valst, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(valst, char *);

		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valst);
}
