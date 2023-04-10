#include "main.h"

/**
 * read_textfile - reads file and prints letters
 * @filename: filename.
 * @letters: number of letters.
 *
 * Return: numbers of letters printed. 0 if failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t rEad, wRite;
	char *a;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	a = malloc(sizeof(char) * (letters));
	if (!a)
		return (0);

	rEad = read(fd, buf, letters);
	wRite = write(STDOUT_FILENO, buf, nrd);

	close(i);

	free(a);

	return (wRite);
}
