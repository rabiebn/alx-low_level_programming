#include "main.h"

/**
 * read_textfile - reads and prints a text file to the standard output
 * @filename: file to read and print
 * @letters: number of letter that should be read and printed
 *
 * Return: number of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *s;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (!s)
		return (0);

	count = read(fd, s, letters);
	if (count == -1)
	{
		free(s);
		close(fd);
		return (0);
	}
	count = write(STDOUT_FILENO, s, count);
	if (count == -1)
	{
		free(s);
		close(fd);
		return (0);
	}
	close(fd);
	return (count);
}
