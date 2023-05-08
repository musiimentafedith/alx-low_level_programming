#ifndef MAIN_H
#define MAIN_H

/*headers*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

/*prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
