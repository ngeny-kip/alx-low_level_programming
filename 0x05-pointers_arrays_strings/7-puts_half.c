#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, half;

	half = 0;

	for (x = 0; str[x] != '\0'; x++)
		half++;

	y = (half / 2);

	if ((half % 2) == 1)
		y = ((half + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

