#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: string input
 *@s2: string input
 *
 *Return: character
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int a = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; i < s1[i]; i++)
		;
	for (j = 0; j < s2[j]; j++)
		;
	c = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		c[a] = *s1;
		s1++;
		a++;
	}

	while (*s2 != '\0')
	{
		c[a] = *s2;
		s2++;
		a++;
	}
	c[a] = '\0';

	return (c);
}
