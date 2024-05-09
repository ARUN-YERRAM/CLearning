#include <stdio.h>
#include <unistd.h> // Include this header for 'fork' and 'exit'
#include <sys/types.h> // Include this header for 'wait'
#include <stdlib.h> // Include this header for 'exit'

int main() {
    int pid;

    pid = fork();
    if (pid < 0) {
        printf("\n Fork failed\n");
        exit(-1);
    } else if (pid == 0) {
        execlp("C:/Users/Yerram Abhilash/OneDrive/Documents/ArDocs", "ls", "-l", NULL);
    } else {
        // wait(NULL);
        printf("\nChild Complete\n");
        exit(0);
    }

    return 0;
}
