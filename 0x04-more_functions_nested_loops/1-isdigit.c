#include "main.h"
#include <stdio.h>

/**
 *Check if a number is an interger falling in between 
 *0 and 9, if so return 1
 *otherwise return 0
 */

int _isdigit(int c)
{
int i = (int)c;

if ( i >= 47 && i <= 57)
{
return 1;
}
else 
{
return 0;
}

}
