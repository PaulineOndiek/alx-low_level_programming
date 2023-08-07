#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
*read_textfile - reads a text file and prints
*it to the POSIX standard output.
*@filename: file being read
*@letters: letters to be read
*Return: actual number read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t t;
ssize_t w;
ssize_t fd;
char *buff;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
t = read(fd, buff, letters);
w = write(STDOUT_FILENO, buff, t);
free(buff);
close(fd);
return (w);
}
