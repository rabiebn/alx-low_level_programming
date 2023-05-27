#include "main.h"

/**
 * print_magic_number - Prints the ELF magic number.
 *
 * Description: This function takes a pointer to the e_ident
 * field of the ELF header as input, and prints the magic number
 * in hexadecimal format.
 * @e_ident: Pointer to the ELF header e_ident field.
 */
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
 * print_class - Prints the ELF header class.
 *
 * Description: This function takes a pointer to the e_ident
 * field of the ELF header as input, and prints the class of
 * the ELF file.
 *
 * @e_ident: Pointer to the ELF header e_ident field.
 */
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
 * print_entry - Prints the entry point address of the ELF header
 * @elf_header: A pointer to the ELF header
 */
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
 * print_all - prints all sections
 * @ehdr: elf header
 * @fd: file descriptor
 */
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
 * iself - function to check if is ELF
 * @e_ident: A pointer to an array containing the ELF magic numbers
 */
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
