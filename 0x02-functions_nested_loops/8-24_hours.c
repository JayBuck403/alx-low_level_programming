#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int m = 0;
	int n = 23;
	int j = 0;
	int k = 59;

	while (m <= n)
	{
		while (j <= k)
		{
			_putchar(m < 9 ? 0 + '0' : m / 10 + '0');
			_putchar(m < 9 ? m + '0' : m % 10 + '0');
			_putchar('\n');
			_putchar(j < 9 ? 0 +'0' : j /10 + '0');
			_putchar(j < 9 ? j + '0' : j % 10 + '0');
			_putchar('\n');

			j++;
		}
		j = 0;
		m++;
	}

}
