#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to create
 * @text_content: string to write to the file.
 * Return: 1 on success and -1 on failure of create, write and file none-exist.
 */
int create_file(const char *filename, char *text_content)
{
int fd, wr, len;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
{
len++;
}
}
wr = write(fd, text_content, len);
if (wr == -1)
{
return (-1);
}
close(fd);
return (1);
}
