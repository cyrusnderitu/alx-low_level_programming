#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file to create.
 * @text_content: string to write to the file.
 * Return: 1 on success and -1 on failure of append, write and file none-exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr, len;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
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
