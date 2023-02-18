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
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, k);
	else if (k == 0)
		printf("last digit of %d is %d and is 0\n", n, k);
	else if (k < 6)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);
return (0);
}
