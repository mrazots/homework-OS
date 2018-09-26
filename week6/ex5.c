#include <stdio.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>

pid_t p1, p2, t;
int i = 0;

void sighan(int num) {
  if (num == SIGTERM) {
    if (p1 == p2) {
      printf("User used user sigterm on child process");
    }
  }
}

int main() {
  signal(SIGTERM, sighan);
  p1 = getpid();
  fork();
  p2 = getppid();
  t = getpid();
  while (1 == 1) {
    if (i == 10) {
      kill(t, SIGTERM);
      return 0;
    } 
    else {
      printf("I love Operating Systems\n");
      sleep(1);
      i++;
    }
  }

  return 0;
}
