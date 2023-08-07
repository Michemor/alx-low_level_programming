#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>
#include <sys/stat.h>
#define SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_files(const char *, const char *);
int read_elf_header(const char *file);

#endif /* MAIN_H */
