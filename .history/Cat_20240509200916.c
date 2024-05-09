#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

// Include this header for 'read' function

int main(int argc, char *argv[])
{
    char ch;
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        printf("\nFile not found\n");
        return 1; // Return an error code if file not found5
    }
    while (read(fd, &ch, 1))
    {
        putchar(ch); // Use putchar to print character
    }
    close(fd); // Use close to close file descriptor
    return 0;
}