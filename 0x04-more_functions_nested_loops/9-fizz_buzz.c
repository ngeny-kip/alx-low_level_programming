#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 to 100.
 * multiple of 3 print fizz
 * multiple of 5 print buzz
 * for both fizzbuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf(" %d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}

