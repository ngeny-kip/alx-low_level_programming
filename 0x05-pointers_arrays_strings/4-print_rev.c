#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: string to be printed
 * Return: Return 0 successful
 */
void print_rev(char *s)
{
	int revs = 0;
	int o;

	while (*s != '\0')
	{
		revs++;
		s++;
	}
	s--;
	for (o = revs; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
