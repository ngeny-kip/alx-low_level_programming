#include "main.h"
/**
 * puts2 - prints only one character out of two
 * starting with the first one
 * @str: input
 * Return: print one character
 */
void puts2(char *str)
{
	int stup = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		stup++;
	}
	x = stup - 1;

	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}


