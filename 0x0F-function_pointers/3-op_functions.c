#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds a and b
 * @a: user input 1
 * @b: user input 2
 * Return: returns sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts a and b
 * @a: user input 1
 * @b: user input 2
 * Return: returns a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a to b
 * @a: user input 1
 * @b: user input 2
 * Return: returns a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a and b
 * @a: user input 1
 * @b: user input 2
 * Return: returns a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo a and b
 * @a: user input 1
 * @b: user input 2
 * Return: returns a modulo b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
