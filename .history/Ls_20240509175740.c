#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
// #include <sys/wait.h>
#include <stdlib.h> // Include this header for the 'exit' function

int main()
{
    int pid;
    pid = fork();

    if (pid < 0)
    {
        printf("\n Fork failed\n"); // Correct the typo in "print" to "printf"
        exit(-1);
    }
    else if (pid == 0)
    {
        execlp("/bin/ls", "ls", "-l", NULL); // Correct the backslashes to forward slashes
    }
    else
    {
        wait(NULL);
        printf("\nChild Complete\n"); // Correct the typo in "exist" to "exit"
        exit(0);
    }
}