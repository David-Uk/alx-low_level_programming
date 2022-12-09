#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cVal;
	int iVal;
	long int lInt;
	long long int lLInt;
	float fVal;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(cVal));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(iVal));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lInt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lLInt));
	printf("Size of a float %lu byte(s)\n", (unsigned long)sizeof(fVal));
	return (0);
}
