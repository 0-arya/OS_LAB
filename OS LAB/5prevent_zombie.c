#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    printf("PREVENT ZOMBIE PROCESS\n");
    int i;
    int status; //Variable to store exit status of the child process
    int p_id = fork(); // Create a new process

    if (p_id == 0) {
        // Code in the child process
        for(i=0;i<5;i++)
        printf("I am a child process, %d\n",getpid());
        
    } else {
        // Code in the parent process
        wait(&status); //Wait for child process to finish and store its exit status
        printf("Parent process, %d\n",getpid());
    }

    return 0;
}
