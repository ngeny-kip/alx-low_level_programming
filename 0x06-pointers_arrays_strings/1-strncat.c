#include "main.h"
/**
 * _strcat - concatenate two strings.
 * @dest:value to inputed
 * @src: Value to inputed
 *
 * Return: 0 success
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}

