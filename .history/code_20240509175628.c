#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h> // Include this header for the 'read' and 'write' functions

int main(int argc, char *argv[])
{
    int i, fd1, fd2;
    char *file1, *file2, buf[2];

    if (argc != 3)
    {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1; // Return an error code if incorrect number of arguments provided
    }

    file1 = argv[1];
    file2 = argv[2];
    printf("file1=%s file2=%s\n", file1, file2);

    fd1 = open(file1, O_RDONLY);
    if (fd1 == -1)
    {
        printf("Error opening file %s\n", file1);
        return 1; // Return an error code if file1 cannot be opened
    }

    fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if (fd2 == -1)
    {
        printf("Error creating or opening file %s\n", file2);
        close(fd1); // Close the previously opened file descriptor
        return 1;   // Return an error code if file2 cannot be opened or created
    }

    while ((i = read(fd1, buf, 1)) > 0)
    {
        write(fd2, buf, 1);
    }

    remove(file1);
    close(fd1);
    close(fd2);
    return 0;
}