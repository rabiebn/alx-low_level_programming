#include "main.h"

/**
 * print_abiversion - prints the ABI version
 * @fd: the ELF file descreptor
 */
void print_abiversion(int fd)
{
	unsigned char buffer[BUFFER_SIZE];
	Elf32_Ehdr *elf_header = (Elf32_Ehdr *) buffer;

	lseek(fd, 0, SEEK_SET);
	if (read(fd, elf_header, sizeof(*elf_header)) == -1)
	{
		fprintf(stderr, "read error\n");
		exit(98);
	}

	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints ELF file type
 * @e_type: ELF file type
 */
void print_type(uint16_t e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}

/**
 * main - prints the ELF headers of a given file
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 On success, On failure errno is set accordingly.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(errno);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: File %s failed to open\n", argv[1]);
		exit(errno);
	}
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		close(fd);
		exit(errno);
	}
	iself(ehdr.e_ident);
	print_all(&ehdr, fd);
	close(fd);
	return (0);
}

