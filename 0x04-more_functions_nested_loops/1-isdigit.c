#include "main.h"
/**
 * _isdigit - Is Digit?
 * @c: number
 * Return: int
 */
int _isdigit(int c)
{
	/*ASCII DIGITS*/
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
