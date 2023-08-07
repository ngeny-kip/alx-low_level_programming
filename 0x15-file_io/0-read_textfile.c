#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1){
        printf("Error opening fd");
		return (0);}
	fp = malloc(sizeof(char) * letters);
	r = read(fd, fp, letters);
	w = write(STDOUT_FILENO, fp, r);

	free(fp);
	close(fd);
	return (w);
}

