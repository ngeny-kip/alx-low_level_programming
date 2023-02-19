#include <stdio.h>

/**
 *  main - Entry point
 *  Return: zero (success)
 */
int main(void)
{
	int digit0;
	int digit1;
	int digit2;

	for (digit0 = 0; digit0 < 8; digit0++)
	{
		for (digit1 = digit0 + 1; digit1 < 9; digit1++)
		{
			for (digit2 = digit1 + 1; digit2 < 10; digit2++)
			{
				putchar((digit0 % 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');

			if (digit0 == 7 && digit1 == 8 && digit2 == 9)
			continue;

			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
