#include "main.h"
/**
 * print_numbers - Prints numbers using putchar
 */
void print_numbers(void)
{
	int n;

	/* Codigo ASCII 0-9 */
	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
