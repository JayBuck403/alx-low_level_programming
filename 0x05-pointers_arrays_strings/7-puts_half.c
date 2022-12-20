#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 * Return: void
 */

void puts_half(char *str)
{
	int i = _strlen(str) % 2;
	int j = _strlen(str) / 2;
	int k = (_strlen(str) - 1) / 2;

	while (i == 0 && str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	while (i != 0 && str[k] !='\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}

/**
 * _strlen - computes the length of a string
 * @s: string input
 * Return: length of string
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
