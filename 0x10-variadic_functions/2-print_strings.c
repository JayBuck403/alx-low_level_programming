#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator input
 * @n: number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, char*);

	for (i = 0; i < n; i++)
	{

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s)
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
