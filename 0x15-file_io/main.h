#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdint.h>
#include <string.h>

#define BUFFER_SIZE 1024

#define ERROR_EXIT_CODE 98

/**
 * struct Elf64_Ehdr - structure representing the ELF header.
 *
 * @ident: ELF identification bytes.
 * @type: Object file type.
 * @machine: Architecture.
 * @version: Object file version.
 * @entry: Entry point virtual address.
 * @phoff:  Program header table file offset.
 * @shoff:  Section header table file offset.
 * @flags: Processor-specific flags.
 * @ehsize:  ELF header size in bytes.
 * @phentsize:   Program header table entry size.
 * @phnum:    Program header table entry count.
 * @shentsize:   Section header table entry size.
 * @shnum:    Section header table entry count.
 * @shstrndx:   Section header string table index.
 * Description: structure representing the ELF header.
 */
struct Elf64_Ehdr
{
	unsigned char ident[16];
	uint16_t type;
	uint16_t machine;
	uint32_t version;
	uint64_t entry;
	uint64_t phoff;
	uint64_t shoff;
	uint32_t flags;
	uint16_t ehsize;
	uint16_t phentsize;
	uint16_t phnum;
	uint16_t shentsize;
	uint16_t shnum;
	uint16_t shstrndx;
};

typedef struct Elf64_Ehdr Elf64_Ehdr;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int error_code, char *msg);
void copy_file(char *file_from, char *file_to);

#endif
