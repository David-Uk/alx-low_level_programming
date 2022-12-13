#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char xters = 'a';

	while (xters <= 'z')
	{
		_putchar (xters);
		xters++;
	}
	_putchar ('\n');
}
