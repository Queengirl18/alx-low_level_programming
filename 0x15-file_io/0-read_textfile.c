#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readout, writeout;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	readout = read(fd, buffer, letters);
	close(fd);
	if (readout == -1)
	{
		free(buffer);
		return (0);
	}
	writeout = write(STDOUT_FILENO, buffer, readout);
	free(buffer);
	if (readout != writeout || writeout == -1)
	{
		return (0);
	}
	return (writeout);
}
