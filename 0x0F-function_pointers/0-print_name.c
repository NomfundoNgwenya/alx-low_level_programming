#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided function pointer
 * @name: Pointer to the name to be printed
 * @f: Function pointer that takes a char pointer as an argument and prints it
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
