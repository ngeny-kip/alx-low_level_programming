#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the programme
 * @argc: Count arguments
 * @argv: Array argument
 *
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
