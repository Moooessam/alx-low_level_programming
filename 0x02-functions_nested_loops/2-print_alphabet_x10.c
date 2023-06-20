#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercas.
 */

void print_alphabet_x10(void)
{
	int alph, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(alph);

		_putchar('\n');
	}
}

