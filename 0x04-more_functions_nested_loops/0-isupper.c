#include "main.h"

/**
 * _isupper - checks if an a character is capital by converting to interger
 * implements the unicode table to be able to determine.
 *@c: print int
 * Return: 1 if caps
 * Always: return 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}

