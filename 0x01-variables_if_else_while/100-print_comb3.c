
#include <stdio.h>

/**
 *  main - Entry point
 *  Return: zero (success)
 */
int main(void)
{
	int digit0;
	int digit1;

	for (digit0 = 0; digit0 < 10; digit0++)
	{
		for (digit1 = 0; digit1 < 10; digit1++)
		{
			putchar((digit0 % 10) + '0');
			putchar((digit1 % 10) + '0');

			if (digit0 == 9 && digit1 == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
