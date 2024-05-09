#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char ch;
    int fd;

    // Check if correct number of arguments is provided
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    // Open the first file
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        printf("\nFile %s not found\n", argv[1]);
        return 1;
    }

    // Read and print contents of the first file
    while (read(fd, &ch, 1)) {
        putchar(ch);
    }

    // Close the first file
    close(fd);

    // Open the second file
    fd = open(argv[2], O_RDONLY);
    if (fd == -1) {
        printf("\nFile %s not found\n", argv[2]);
        return 1;
    }

    // Read and print contents of the second file
    while (read(fd, &ch, 1)) {
        putchar(ch);
    }

    // Close the second file
    close(fd);

    return 0;
}
