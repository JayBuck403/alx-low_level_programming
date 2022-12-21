#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int length = 0;
	char c;

	while (s[length])
	{
		length++;
		j = length - 1;
	}

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j--;
	}
}
