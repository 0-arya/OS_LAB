#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    fork();  // First fork, 2 processes (including the original one)
    fork();  // Second fork, now 4 processes
    fork();  // Third fork, finally 8 processes
    printf("hello world \n");  // Each of the 8 processes will print "hello world"
    return 0;
}

