#include <stdio.h>

/**
 * main - Programme that prints possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
int tens, ones;
for (tens = 0; tens <= 99; tens++)
{
for (ones = 0; ones <= 99; ones++)
{
if (tens < ones)
{
putchar((tens / 10) + 48);
putchar((tens % 10) + 48);
putchar(' ');
putchar((ones / 10) + 48);
putchar((ones % 10) + 48);
if (tens != 98 || ones != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
