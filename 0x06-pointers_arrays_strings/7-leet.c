#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 *
 * Return: string
 */

char *leet(char *s)
{
	char a[] = "aAeEoOtTlL";
	char r[] = "4433007711";

	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0' && s[i] != a[j]; j++)
			;
		if (j < 10)
		{
			s[i] = r[j];
		}
		i++;
	}
	return (s);
}

