#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: string
 */

char *rot13(char *s)
{
	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; m[j] != '\0' && s[i] != m[j]; j++)
			;
		if (j < 52)
		{
			s[i] = n[j];
		}
		i++;
	}
	return (s);
}
