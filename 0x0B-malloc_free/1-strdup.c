#include <stdlib.h>
#include "main.h"

/**
 *_strdup - points to a newly allocated space containing the string parameter
 *@str: string input
 *
 *Return: character
 */

char *_strdup(char *str)
{
	char *str1;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i++;
	str1 = malloc(sizeof(char) * i);

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
		str1[j] = str[j];

	return (str1);
}
