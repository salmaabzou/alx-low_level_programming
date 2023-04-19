#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - printing a name from param
 * @name: name to print
 * @f: pointer to function
 *
 * Return: nada
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
