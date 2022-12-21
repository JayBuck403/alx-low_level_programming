#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string input
 * @s2: string input
 *
 * Return: 0 equal, 15 s1 is greater than s2 and -15 if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}

		j = (int) s1[i];
		k = (int) s2[i];

		if (j > k)
			return (15);
		if (k > j)
			return (-15);
	}
}
