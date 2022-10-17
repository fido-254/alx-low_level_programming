#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that prints numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
int i;
char a;

for (i = '0'; i <= '9'; ++i)
putchar(i);
for (a = 'a'; a <= 'f'; ++a)
putchar(a);
putchar('\n');
return (0);
}
