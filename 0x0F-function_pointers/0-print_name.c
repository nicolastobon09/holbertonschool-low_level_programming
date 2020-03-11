#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: is a parameter
 * @f: is a function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
