#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if file exists. -1 if file absent or fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	int i;
	int wr;

	if (!filename)
		return (-1);

	fa = open(filename, O_WRONLY | O_APPEND);

	if (fa == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		wr = write(fa, text_content, i);

		if (wr == -1)
			return (-1);
	}

	close(fa);

	return (1);
}
