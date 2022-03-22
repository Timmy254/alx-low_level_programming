#include "main.h"

/**
 * _strcpy - copies a string that's dereferenced by src.
 * @dest: the copied string
 * @src: the pointer to the string to be copied
 *
 * Return: the pointer to destination(dest)
 */
char *_strcpy(char *dest, char *src)
{
int len = 0, i;

for (; src[len] != '\0'; len++)
;

for (i = 0; i < len; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}
