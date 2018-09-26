#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handler(int s)
{
  if (s == SIGUSR1)
    printf("received SIGUSR1\n");

  else if (s == SIGKILL)
    printf("received SIGKILL\n");

  else if (s == SIGSTOP)
    printf("received SIGSTOP\n");
}

int main(void)
{
  if (signal(SIGUSR1, handler) == SIG_ERR)
    printf("\ncan't catch SIGUSR1\n");

  if (signal(SIGKILL, handler) == SIG_ERR)
    printf("\ncan't catch SIGKILL\n");

  if (signal(SIGSTOP, handler) == SIG_ERR)
    printf("\ncan't catch SIGSTOP\n");

  while(1)
    sleep(1);
   
  return 0;
}
