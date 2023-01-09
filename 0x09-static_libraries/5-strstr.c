#include "main.h"
#include <stdlib.h>


/**
 *_strstr - find the first occurence
 *@haystack: string input
 *@needle: string input
 *
 *Return: the pointer to the first occurence
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int a;
	int b;

	for (b = 0; needle[b]; b++)
	;
	if (b == 0)
	return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			for (a = i; haystack[a]; a++)
			{
				if (needle[j] == '\0')
					return (&(haystack[i - 1]));
				if (haystack[a] != needle[j])
					break;
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
