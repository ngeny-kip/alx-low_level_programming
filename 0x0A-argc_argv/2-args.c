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
	int count;

	for  (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
