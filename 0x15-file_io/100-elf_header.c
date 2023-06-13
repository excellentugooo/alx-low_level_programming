#include <elf.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * check_e - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void check_e(unsigned char *e_ident)
{
    if (!(e_ident[EI_MAG0] == ELFMAG0 &&
          e_ident[EI_MAG1] == ELFMAG1 &&
          e_ident[EI_MAG2] == ELFMAG2 &&
          e_ident[EI_MAG3] == ELFMAG3))
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(98);
    }
}

/**
 * pmagic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to ELF magic numbers.
 */
void pmagic(unsigned char *e_ident)
{
    int i;

    printf(" Magic: ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

/**
 * pclass - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void pclass(unsigned char *e_ident)
{
    printf(" Class: ");
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
 * pdata - Prints the data encoding of an ELF header.
 * @e_ident: A pointer to the ELF data encoding.
 */
void pdata(unsigned char *e_ident)
{
    printf(" Data: ");
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
        printf("<unknown: %x>\n", e_ident[EI_DATA]);
    }
}

/**
 * pversion - Prints the version of an ELF header.
 * @e_ident: A pointer to the ELF version.
 */
void pversion(unsigned char *e_ident)
{
    printf(" Version: %d", e_ident[EI_VERSION]);
    switch (e_ident[EI_VERSION])
    {
    case EV_NONE:
        printf(" (invalid)\n");
        break;
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}

/**
 * posabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to the ELF OS/ABI.
 */
void posabi(unsigned char *e_ident)
{
    printf(" OS/ABI: ");
    switch (e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
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
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}

/**
 * ptype - Prints the type of an ELF header.
 * @e_type: The ELF type.
 */
void ptype(unsigned int e_type)
{
    printf(" Type: ");
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
 * pentry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 */
void pentry(unsigned long int e_entry)
{
    printf(" Entry point address: %#lx\n", e_entry);
}

/**
 * main - Displays the information contained in the ELF header.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return 98;
    }

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
    {
        fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
        close(fd);
        return 98;
    }

    check_e(ehdr.e_ident);
    printf("ELF Header:\n");
    pmagic(ehdr.e_ident);
    pclass(ehdr.e_ident);
    pdata(ehdr.e_ident);
    pversion(ehdr.e_ident);
    posabi(ehdr.e_ident);
    ptype(ehdr.e_type);
    pentry(ehdr.e_entry);

    close(fd);
    return 0;
}

