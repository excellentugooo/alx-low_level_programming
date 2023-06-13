#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fopen;
	ssize_t x;
	ssize_t y;

	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	x = read(fopen, str, letters);
	y = write(STDOUT_FILENO, str, x);

	free(str);
	close(fopen);
	return (y);
}
