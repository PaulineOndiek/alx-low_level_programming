#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output
 * @filename: file being read
 * @letters: letters to be read
 * Return: 0 if filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t t;
ssize_t w;
ssize_t fd;
fd = open(filename, O_RDONLY);
if (fd == -1)
	return 0;
buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
