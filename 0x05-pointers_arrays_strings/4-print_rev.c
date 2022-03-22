#include "main.h"

/**
 * print_rev - outputs a string, but in reverse then followed by a new line.
 * @s: the string to be manipulated.
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;

for (i -= 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
