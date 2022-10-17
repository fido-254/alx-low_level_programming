#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that prints single digit numbers of base 10 ,
 * from 0, followed by new line.
 *
 * Return: 0.
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; ++i)
putchar(i);
putchar('\n');
return (0);
}
