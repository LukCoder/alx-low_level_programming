#include "main.h"

/**
 * ptint_alphabet -print all alphbet in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
