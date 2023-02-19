#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase.
 * Return: alawys zero (success)
 */
int main(void)
{
	int numb;
	char x;

	for
		(numb = 0; numb < 10; numb++)
			putchar((numb % 10) + '0');

	for
		(x = 'a'; x <= 'f'; x++)
			putchar(x);

	putchar('\n');

	return (0);
}
