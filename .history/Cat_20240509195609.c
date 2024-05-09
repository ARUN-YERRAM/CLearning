#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char ch;
    int fd1, fd2;

    // Check if correct number of arguments is provided
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    // Open the first file
    fd1 = open(argv[1], O_RDONLY);
    if (fd1 == -1) {
        printf("\nFile %s not found\n", argv[1]);
        return 1;
    }

    // Open the second file
    fd2 = open(argv[2], O_RDONLY);
    if (fd2 == -1) {
        printf("\nFile %s not found\n", argv[2]);
        close(fd1);
        return 1;
    }

    // Read and print contents of the first file
    while (read(fd1, &ch, 1)) {
        putchar(ch);
    }

    // Read and print contents of the second file
    while (read(fd2, &ch, 1)) {
        putchar(ch);
    }

    // Close both files
    close(fd1);
    close(fd2);

    return 0;
}
