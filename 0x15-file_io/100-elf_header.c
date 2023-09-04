#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// ELF header structure
typedef struct {
    uint8_t e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    // ... (other fields not shown for simplicity)
} ElfHeader;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
        return 1;
    }

    const char *elf_filename = argv[1];

    // Open the ELF file for reading
    FILE *elf_file = fopen(elf_filename, "rb");
    if (!elf_file) {
        perror("Error opening ELF file");
        return 1;
    }

    // Read the ELF header
    ElfHeader header;
    if (fread(&header, sizeof(ElfHeader), 1, elf_file) != 1) {
        perror("Error reading ELF header");
        fclose(elf_file);
        return 1;
    }

    // Check if it's a valid ELF file
    if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        fprintf(stderr, "Not a valid ELF file\n");
        fclose(elf_file);
        return 1;
    }

    // Display information from the ELF header
    printf("ELF Type: %d\n", header.e_type);
    printf("Machine: 0x%X\n", header.e_machine);
    printf("Entry point: 0x%lX\n", header.e_entry);
    // Add more fields as needed

    // Close the ELF file
    fclose(elf_file);

    return 0;
}
