#include <stdio.h>

// Function declarations
void makeFile(char name[]);
void writeToFile(char name[]);
void readFromFile(char name[]);
void addToFile(char name[]);

int main() {
    char file[50];
    int option;

    printf("Enter file name (with .txt): ");
    scanf("%s", file);

    do {
        printf("\n--- FILE MENU ---\n");
        printf("1. Create a file\n");
        printf("2. Write to file\n");
        printf("3. Read file\n");
        printf("4. Append to file\n");
        printf("5. Exit\n");
        printf("Choose option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                makeFile(file);
                break;
            case 2:
                writeToFile(file);
                break;
            case 3:
                readFromFile(file);
                break;
            case 4:
                addToFile(file);
                break;
            case 5:
                printf("Exiting... Done!\n");
                break;
            default:
                printf("Invalid option! Try again.\n");
        }

    } while(option != 5);

    return 0;
}

// Function to create a new file
void makeFile(char name[]) {
    FILE *f = fopen(name, "w");
    if (f == NULL) {
        printf("Could not create file.\n");
        return;
    }
    printf("File '%s' created.\n", name);
    fclose(f);
}

// Function to write fresh content
void writeToFile(char name[]) {
    FILE *f = fopen(name, "w");
    if (f == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char text[500];
    getchar(); // clear input buffer
    printf("Enter text to write:\n");
    fgets(text, sizeof(text), stdin);
    fputs(text, f);
    printf("Written to file.\n");
    fclose(f);
}

// Function to read and show file content
void readFromFile(char name[]) {
    FILE *f = fopen(name, "r");
    if (f == NULL) {
        printf("File not found.\n");
        return;
    }
    char ch;
    printf("\n--- File Content ---\n");
    while ((ch = fgetc(f)) != EOF) {
        putchar(ch);
    }
    printf("\n--------------------\n");
    fclose(f);
}

// Function to add more text at end
void addToFile(char name[]) {
    FILE *f = fopen(name, "a");
    if (f == NULL) {
        printf("Could not open file.\n");
        return;
    }
    char more[500];
    getchar(); // clear buffer
    printf("Enter text to append:\n");
    fgets(more, sizeof(more), stdin);
    fputs(more, f);
    printf("Appended to file.\n");
    fclose(f);
}
