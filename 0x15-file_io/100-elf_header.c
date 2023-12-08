#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>
#include <sys/stat.h>

/**
 * error_exit - Print an error message to the standard error and exit.
 * @err_code: The error code to exit with.
 * @msg: The error message to print.
 */
void error_exit(int err_code, const char *msg) {
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(err_code);
}

/**
 * print_elf_header_info - Display information from the ELF header.
 * @header: Pointer to the ELF header.
 */
void print_elf_header_info(Elf64_Ehdr *header) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x", header->e_ident[i]);
        if (i < EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");

    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (header->e_type == ET_REL) ? "REL (Relocatable file)" :
                                                          (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
                                                          (header->e_type == ET_DYN) ? "DYN (Shared object file)" :
                                                          (header->e_type == ET_CORE) ? "CORE (Core file)" : "Unknown");
    printf("  Entry point address:               %#018lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2)
        error_exit(98, "Usage: elf_header elf_filename");

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        error_exit(98, "Error: Can't open file");

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
        error_exit(98, "Error: Can't read file");

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
        error_exit(98, "Error: Not an ELF file");

    print_elf_header_info(&header);

    close(fd);
    return 0;
}
