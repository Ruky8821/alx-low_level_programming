#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define	USE "usage: cp file_from file_to\n"
#define READERR "Error: Can't read from file %s\n"
#define WRITERR "Error: Can't write to %s\n"
#define FDERR "Error: Can't close fd %d\n"
#define PERMIT (00400 | 00200 | 00400 | 00200 | 00004)
#define BUFFER_S 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int arg, char **argv);

#endif

