#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

unsigned int sleep(unsigned int seconds);

int main() {
pid_t child;
for(int i = 0; i < 3; i++){
    child = fork();
}
  printf("I sleep now\n");
  sleep(5);
  printf("I wake up\n");

  return EXIT_SUCCESS;
}
