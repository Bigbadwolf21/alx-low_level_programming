#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valst;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valst, n);

	for (x = 0; x < n; x++)
		sum += va_arg(valst, int);

	va_end(valst);

	return (sum);
}
