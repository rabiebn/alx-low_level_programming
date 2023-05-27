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
/**
 *  * print_data - prints the encoding of the data
 *   * @e: pointer to the ELF header struct
 *    */
void print_data(Elf64_Ehdr *e)
{
	printf("  Data:                              ");
	switch (e->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e->e_ident[EI_DATA]);
			break;
	}
}
/**
 *  * print_version - prints the ELF version
 *   * @e: pointer to the ELF header struct
 *    */
void print_version(Elf64_Ehdr *e)
{
	printf("  Version:                           %d",
			e->e_version);
	if (e->e_version == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 *  * print_osabi - prints the ELF OS/ABI
 *   * @e: pointer to the ELF header struct
 *    */
void print_osabi(Elf64_Ehdr *e)
{
	char *osabi_str;

	switch (e->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			osabi_str = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			osabi_str = "UNIX - HP-UX";
			break;
		case ELFOSABI_NETBSD:
			osabi_str = "UNIX - NetBSD";
			break;
		case ELFOSABI_LINUX:
			osabi_str = "UNIX - Linux";
			break;
		case ELFOSABI_SOLARIS:
			osabi_str = "UNIX - Solaris";
			break;
		case ELFOSABI_IRIX:
			osabi_str = "UNIX - IRIX";
			break;
		case ELFOSABI_FREEBSD:
			osabi_str = "UNIX - FreeBSD";
			break;
		case ELFOSABI_TRU64:
			osabi_str = "UNIX - TRU64";
			break;
		case ELFOSABI_ARM:
			osabi_str = "ARM";
			break;
		case ELFOSABI_STANDALONE:
			osabi_str = "Standalone application";
			break;
		default:
			printf("<unknown: %x>\n", e->e_ident[EI_OSABI]);
			break;
	}
	printf("  OS/ABI:                            %s\n",
			osabi_str);
}

/**
 *  * print_magic_number - Prints the ELF magic number.
 *   *
 *    * Description: This function takes a pointer to the e_ident
 *     * field of the ELF header as input, and prints the magic number
 *      * in hexadecimal format.
 *       *
 *        * @e_ident: Pointer to the ELF header e_ident field.
 *         */
void print_magic_number(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", e_ident[i],
				i == EI_NIDENT - 1 ? '\n' : ' ');
}

/**
 *  * print_class - Prints the ELF header class.
 *   *
 *    * Description: This function takes a pointer to the e_ident
 *     * field of the ELF header as input, and prints the class of
 *      * the ELF file.
 *       *
 *        * @e_ident: Pointer to the ELF header e_ident field.
 *         */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
			break;
	}
}
/**
 *  * print_entry - Prints the entry point address of the ELF header
 *   * @elf_header: A pointer to the ELF header
 *    */
void print_entry(void *elf_header)
{
	Elf32_Ehdr *header_32 = (Elf32_Ehdr *)elf_header;
	Elf64_Ehdr *header_64 = (Elf64_Ehdr *)elf_header;

	printf("  Entry point address:               0x");

	if (header_32->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%x\n", (unsigned int)header_32->e_entry);
	else if (header_32->e_ident[EI_CLASS] == ELFCLASS64)
		printf("%lx\n", (unsigned long)header_64->e_entry);
}

/**
 *  * print_all - prints all sections
 *   * @ehdr: elf header
 *    * @fd: file descriptor
 *     */
void print_all(Elf64_Ehdr *ehdr, int fd)
{
	print_magic_number(ehdr->e_ident);
	print_class(ehdr->e_ident);
	print_data(ehdr);
	print_version(ehdr);
	print_osabi(ehdr);
	print_abiversion(fd);
	print_type(ehdr->e_type);
	print_entry(ehdr);
}

/**
 *  * iself - function to check if is ELF
 *   * @e_ident: A pointer to an array containing the ELF magic numbers
 *    */
void iself(unsigned char *e_ident)
{
	if (e_ident[0] != 127 &&
			e_ident[1] != 'E' &&
			e_ident[2] != 'L' &&
			e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Invalid ELF file\n");
		exit(errno);
	}
}

#endif
