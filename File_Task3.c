#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// List of C keywords to check
const char* keywords[] = {
    "int", "float", "char", "if", "else", "while", "for", "return", "void", "main"
};

int isKeyword(char* word) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=');
}

void analyzeFile(const char* filename) {
    FILE* f = fopen(filename, "r");
    if (f == NULL) {
        printf("Could not open file.\n");
        return;
    }

    char ch, buffer[100];
    int index = 0;

    printf("Analyzing file: %s\n", filename);
    while ((ch = fgetc(f)) != EOF) {
        // Check for identifiers/keywords
        if (isalnum(ch)) {
            buffer[index++] = ch;
        } else {
            if (index != 0) {
                buffer[index] = '\0';
                index = 0;
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
            }

            // Check for operators
            if (isOperator(ch)) {
                printf("Operator: %c\n", ch);
            }
        }
    }

    fclose(f);
}
 
int main() {
    char filename[100];
    printf("Enter the input filename (e.g., input.c): ");
    scanf("%s", filename);

    analyzeFile(filename);

    return 0;
}
