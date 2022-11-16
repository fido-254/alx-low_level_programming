#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Steven
 * @name: I'm Steven
 * @f: funcion
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
