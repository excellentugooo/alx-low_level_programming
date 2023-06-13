#include "main.h"

/**
 * create_buff - Allocates 1024 byte
 * @filename: The name of the file
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * _close - Closes file descriptors.
 * @file: The file
 */

void _close(int file)
{
	int x;

	x = close(file);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int orig, copy, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	orig = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	copy = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (orig == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wrt = write(copy, buff, rd);
		if (copy == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(orig, buff, 1024);
		copy = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	_close(orig);
	_close(copy);

	return (0);
}
