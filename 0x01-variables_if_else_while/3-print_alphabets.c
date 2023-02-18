#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return: zero (success)
 */
int main(void)
{
	int chr = 'a';
	int CHR = 'A';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	while (CHR <= 'Z')
	{
		putchar(CHR);
		CHR++;
	}
	putchar('\n');
	return (0);
}
