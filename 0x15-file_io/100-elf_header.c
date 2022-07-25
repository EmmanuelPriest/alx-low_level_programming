#include "main.h"
#include <elf.h>

/**
* check_elf - checks for an elf file
* @e_ident: pointer to the elf magic number arrays
*
* Return: nothing
*/
void check_elf(unsigned char *e_ident)
{
	int n = 0;

	while (n < 4)
	{
		if (e_ident[n] != 127 && e_ident[n] != 'E'
				&& e_ident[n] != 'L' && e_ident[n] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		n++;
	}
}

/**
* print_magic - function that prints magic numbers of an elf header
* @e_ident: pointer to the elf magic number arrays
*
* Description: magic numbers are separated by spaces
* Return: nothing
*/
void print_magic(unsigned char *e_ident)
{
	int n = 0;

	printf("  Magic:   ");

	while (n < EI_NIDENT)
	{
		printf("%02x", e_ident[n]);

		if (n == EI_NIDENT - 1)
			putchar('\n');
		else
			putchar(32);
		n++;
	}
}

/**
* print_class - function tho print the class of an elf header
* @e_ident: pointer to the elf class arrays
*
* Return: nothing
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
	}
}

/**
* print_data - function that prints the data of an elf header
* @e_ident: pointer to the elf class arrays
*
* Return: nothing
*/
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
* print_version - function that prints the version of an elf header
* @e_ident: pointer to elf version array
*
* Return: nothing
*/
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			putchar('\n');
			break;
	}
}

/**
* print_osabi - function that prints os/abi of elf header
* @e_ident: pointer to elf version array
*
* Return: nothing
*/
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n);
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
* print_abi - function that prints abi version of elf header
* @e_ident: pointer to elf abi version
*
* Return: nothing
*/
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", 
			e_ident[EI_ABIVERSION]);
}

/**
* print_type - function that prints the type of elf header
* @e_type: elf type
* @e_ident: pointer to elf class array
*
* Return: nothing
*/
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

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
	}
}

/**
* print_entry - function that prints entry point to elf header
* @e_entry: entry point address
* @e_ident: pointer to elf class array
*
* Return: nothing
*/
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | 
			((e_entry >> 8) & 0xFF00FF);
		e_ntry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
* close_elf - function that closes elf file
* @elf: elf file descriptor
*
* Description: exit 98 if the file cannot close
* Return: nothing
*/
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
* main - function that shows the information in the elf header at the start
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
