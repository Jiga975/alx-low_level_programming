#include "main.h"
/**
 * _islower - main
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
