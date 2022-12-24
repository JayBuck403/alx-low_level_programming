#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		for (i = 0; i < _strlen(s); i++)
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
				s[i] = s[i] + 13;
			else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
				s[i] = s[i] - 13;
		}
		i++;
	}
	return (s);

}

/**
 * _strlen - computes thr length of a string
 * @s: string to computes
 *
 * Return: integer
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
