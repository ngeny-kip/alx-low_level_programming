#include <stdio.h>
#include "man.h"

/**
 * main- prints the name of the programme
 * @argc: Counts arguments
 *
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
