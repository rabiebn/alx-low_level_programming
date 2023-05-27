#include "main.h"

/**
 * print_data - prints the encoding of the data
 * @e: pointer to the ELF header struct
 */
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
 * print_version - prints the ELF version
 * @e: pointer to the ELF header struct
 */
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
 * print_osabi - prints the ELF OS/ABI
 * @e: pointer to the ELF header struct
 */
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
