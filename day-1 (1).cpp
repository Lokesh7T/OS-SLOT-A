#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t pid, ppid;

  pid = fork();

  if (pid == 0) {
    printf("Child process: PID = %d, PPID = %d\n", getpid(), getppid());
  } else if (pid > 0) {
    printf("Parent process: PID = %d, PPID = %d\n", getpid(), getppid());
  } else {
    printf("Error: fork() failed\n");
    exit(1);
  }

  return 0;
}
