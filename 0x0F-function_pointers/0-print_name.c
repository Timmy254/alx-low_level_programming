#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name that is to be printed out to the stdout
 * @f: a function pointer that is used to determine the format of name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
