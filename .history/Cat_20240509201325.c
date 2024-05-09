#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h> // Include this header for error handling

int main(int argc, char *argv[]) {
    char ch;
    int fd;

    // Check if correct number of arguments is provided
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Open the file for reading
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error"); // Print error message
        return 1;
    }

    // Read and print contents of the file
    while (read(fd, &ch, 1) > 0) {
        putchar(ch);
    }

    // Check for read error
    if (read(fd, &ch, 1) == -1) {
        perror("Error");
        close(fd);
        return 1;
    }

    // Close the file
    close(fd);

    return 0;
}
