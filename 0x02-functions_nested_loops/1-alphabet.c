#include "main.h"
/**
 * print_alphabet - Starting point of code
 *
 * prints alphabets  using _putchar
 *
 * Return: 0 int
 */
int print_alphabet(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
