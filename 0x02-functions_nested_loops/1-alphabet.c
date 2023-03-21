#include "main.h"

/**
 * ptint_alphabet - print all alphbet in lowercase
 *
 * Return: Always 0;
 */

void ptint_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
