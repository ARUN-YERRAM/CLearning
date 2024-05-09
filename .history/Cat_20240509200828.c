#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char ch;

    // Check if correct number of arguments is provided
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    // Open and display contents of the first file
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("\nFile %s not found\n", argv[1]);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    // Open and display contents of the second file
    file = fopen(argv[2], "r");
    if (file == NULL) {
        printf("\nFile %s not found\n", argv[2]);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
