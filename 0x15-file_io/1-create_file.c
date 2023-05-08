#include "main.h"

/**
 * create_file - create file
 * @filename: filename.
 * @text_content: contents in the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fc;
	int i;
	int wr;

	if (!filename)
		return (-1);

	fc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	wr = write(fc, text_content, i);

	if (wr == -1)
		return (-1);

	close(fc);

	return (1);
}
