#include "main.h"
/*
* function that returns the length of a string
* always return zero
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
