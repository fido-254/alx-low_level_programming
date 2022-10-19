#include"main.h"

/**
 * main - Starting Point of the Code
 *
 * Description: prints _putchar on Execution
 *
 * Return: return 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
