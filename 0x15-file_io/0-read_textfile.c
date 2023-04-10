#include "main.h"

/**
 * read_textfile - reads a text file and prints contents
 * @filename: filename.
 * @letters: numbers of letters.
 *
 * Return: numbers of letters printed. returns 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ft;
	ssize_t rd, wr;
	char *pr;

	if (!filename)
		return (0);

	ft = open(filename, O_RDONLY);

	if (ft == -1)
		return (0);

	pr = malloc(sizeof(char) * (letters));
	if (!pr)
		return (0);

	rd = read(ft, pr, letters);
	wr = write(STDOUT_FILENO, pr, rd);

	close(ft);

	free(pr);

	return (wr);
}
