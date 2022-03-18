#include <stdio.h>
#include "main.h"

/**
 * _isupper(int c) - checks if an a character is capital by converting to interger
 * implements the unicode table to be able to determine.
 * Return: 1 if caps 
 * else: return 0
 */

int _isupper(int c)
{
int i = c;

if (i > 64 && i < 91)
{
return 1;
}
else
{
return 0;
}
}
