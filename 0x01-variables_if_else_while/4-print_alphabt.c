#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return: zero (success)
 */
int main(void)
{
	char n;

	n = 'a';
	while
		(n <= 'z')
		{
			if ((n != 'e') && (n != 'q'))
			{
				putchar(n);
			}
			n++;
		}
	putchar('\n');
	return (0);
}
