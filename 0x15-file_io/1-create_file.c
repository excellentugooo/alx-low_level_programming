#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fop, wrt, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	fop = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fop, text_content, lenght);

	if (fop == -1 || wrt == -1)
		return (-1);

	close(fop);

	return (1);
}
