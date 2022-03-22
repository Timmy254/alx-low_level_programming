#include "main.h"

/**
 * puts2 - prints each character of a string,
 * followed by a new line.
 * @str: the string to be utilized.
 * Return: nothing.
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
if (!(i % 2))
_putchar(str[i]);
_putchar(10);
}
