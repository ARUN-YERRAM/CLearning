#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t pid;
	pid = fork();
	
	if (pid < 0){
		printf(" Fork failed\n");
	}
	else if( pid == 0){
		printf("Child\n");
	}
	else{
		printf("Parent\n");
	}
}