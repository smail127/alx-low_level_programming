#include "function_pointers.h"
#include <stdio.h>
/**
 * Print_name - print name using pointer to function
 * @name: String to add
 * @f: Pointer to function
 * return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
