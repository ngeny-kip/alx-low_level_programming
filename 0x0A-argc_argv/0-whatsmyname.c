#include <stdio.h>
#include "main.h"

/**
 * main- prints the name of the programme
 * @argc: Counts arguments
 *
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
