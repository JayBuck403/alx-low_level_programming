#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitaliza
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] && s[i] <= 122 && s[i] >= 97)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
