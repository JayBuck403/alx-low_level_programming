#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string input
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}

/**
 * _strlen - computes the length of a string
 * @s: string input
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
