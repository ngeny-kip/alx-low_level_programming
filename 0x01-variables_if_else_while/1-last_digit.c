#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - main block gets arandom number and compares it with 5.
 *  Return: zero (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %i is greater than 5\n", last);
	else if (last == 0)
		printf("last digit of %i is zero\n", last);
	else if (last < 6)
		printf("last digit of %i is less than 6 and not 0\n", last);
return (0);
}
