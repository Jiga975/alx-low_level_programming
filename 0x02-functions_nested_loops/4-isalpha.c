#include "main.h"
#include <ctype.h>
/**
 * _islower - main function
 * @c: a character in ASCII code
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{	
		return (1);
	}
	return (0);
}

