#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void on_sigint(int sig) {
    system("pkill vim");
    printf("\nYou are pressed CTRL+C! Goodbye!\n");
    exit(0);
}

int main() {
    printf("Welcome to IT007, I am CT240023!\n");
    signal(SIGINT, on_sigint);
    system("vim abcd.txt");
    return 0;
}
