# 0x15. C - File I/O

## Requirement

### General

- Allowed editors: vi, vim, emacs
- All your files should end with a new line
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

## Tasks

### 0. Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: **ssize_t read_textfile(const char *filename, size_t letters);**
- returns the actual number of letters it could read and print

### 1. Under the snow

Create a function that creates a file.

- Prototype: **int create_file(const char *filename, char *text_content);**

