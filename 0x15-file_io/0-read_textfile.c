#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *      prints it to the POSIX standard output.
 * @filename: Pointer to the file descriptor.
 * @letters: length of the fd.
 * Return: Actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, rd, wr;
char *buffer;
if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
rd = read(fd, buffer, letters);
wr = write(STDOUT_FILENO, buffer, rd);
if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
{
free(buffer);
return (0);
}
free(buffer);
close(fd);
return (wr);
}
