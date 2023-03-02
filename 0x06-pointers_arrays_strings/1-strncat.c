#include "main.h"
/**
 * _strncat- concatenate two strings.
 * @dest:value to inputed
 * @src: Value to inputed
 * @n: value to be inputed
 *
 * Return: 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}

