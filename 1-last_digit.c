#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assign and print a random number to the variable n
 *Return: Always 0
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	printf("Last digit of %i is %i and is ", n, (digital));

	if ((digital) == 0)
	{
		printf("0\n");
	}
	else if ((digital) > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
