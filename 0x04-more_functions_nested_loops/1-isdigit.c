#include "main.h"

/**
 * _isdigit - check if the number is 0 to 9
 * @c: Character to be checked.
 *
 * Return: Returns 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
