#include"main.h"

/**
 * main - prints numbers 1 - 100 followed by a new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 5 print Buzz
 *       numbers that are multiples of 3 & 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int cont = 1;

	printf("%d", cont);
	cont++;
	for (; cont <= 100; cont++)
	{
		if (cont % 3 == 0 && cont % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (cont % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (cont % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", cont);
		}
	}
	printf("\n");
	return (0);
}
