#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to compress the input file using RLE
void compressFile(const char *input, const char *output) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");

    if (in == NULL || out == NULL) {
        printf("File error during compression!\n");
        return;
    }

    char current, prev = fgetc(in);
    int count = 1;

    while ((current = fgetc(in)) != EOF) {
        if (current == prev) {
            count++;
        } else {
            fprintf(out, "%c%d", prev, count);
            prev = current;
            count = 1;
        }
    }

    // Write the last sequence
    fprintf(out, "%c%d", prev, count);

    fclose(in);
    fclose(out);

    printf("File compressed successfully to '%s'\n", output);
}

// Function to decompress an RLE file
void decompressFile(const char *input, const char *output) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");

    if (in == NULL || out == NULL) {
        printf("File error during decompression!\n");
        return;
    }

    char ch;
    int count;

    while ((ch = fgetc(in)) != EOF) {
        if (isalpha(ch)) {
            fscanf(in, "%d", &count);
            for (int i = 0; i < count; i++) {
                fputc(ch, out);
            }
        }
    }

    fclose(in);
    fclose(out);

    printf("File decompressed successfully to '%s'\n", output);
}

int main() {
    int choice;
    char inputFile[100], outputFile[100];

    do {
        printf("\n--- RLE COMPRESSION TOOL ---\n");
        printf("1. Compress a file\n");
        printf("2. Decompress a file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter input filename to compress: ");
                scanf("%s", inputFile);
                printf("Enter output filename to save compressed data: ");
                scanf("%s", outputFile);
                compressFile(inputFile, outputFile);
                break;
            case 2:
                printf("Enter input filename to decompress: ");
                scanf("%s", inputFile);
                printf("Enter output filename to save decompressed data: ");
                scanf("%s", outputFile);
                decompressFile(inputFile, outputFile);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
