#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be printed
 * Return: Return a reversed string
 */
void rev_string(char *s);
{
	char rev = s[0];
	int counter = 0;
	int x;

	while (s[counter] != '\0')
		counter++;
	for (x = 0; x < counter; x++)
	{
		counter--;
		rev = s[x];
		s[counter] = rev;
	}
}
