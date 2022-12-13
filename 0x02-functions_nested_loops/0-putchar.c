#include "main.h"

/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 **/

int main(void)
{
	char var[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');
	return (0);
}
