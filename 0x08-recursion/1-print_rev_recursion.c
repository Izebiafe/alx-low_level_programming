#include "main.h"
/*
*function that prints a string in reverse
*
*Return:zero always
*/

void _print_rev_recursion(char *s)
{
if (*s != \'0')
{
	_print_rev_recursion(s +1);
	putchar(*s);
}
}
