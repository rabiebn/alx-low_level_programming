#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#define FILE_ERROR -1
#define INVALID_NUMBER_OF_ARGUMENTS 97
#define DOES_NOT_EXIST_OR_UNABLE_TO_READ 98
#define CANNOT_CREATE_OR_WRITE 99
#define CANNOT_CLOSE 100
#define ARGUMENT_COUNT_EXPECTED 3

#include <elf.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* elf printint functions */
void print_data(Elf64_Ehdr *e);
void print_version(Elf64_Ehdr *e);
void print_osabi(Elf64_Ehdr *e);
void print_magic_number(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_entry(void *elf_header);
void print_all(Elf64_Ehdr *ehdr, int fd);
void iself(unsigned char *e_ident);
void print_abiversion(int fd);
void print_type(uint16_t e_type);
#endif
