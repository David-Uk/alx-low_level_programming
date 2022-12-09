#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, last;

	srand(time(0));

	num = rand() - RAND_MAX / 2;
	last = num % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", num, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", num, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", num, last);
	return (0);
}
