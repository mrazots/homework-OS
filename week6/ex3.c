#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handler(int s)
{
  if (s == SIGINT)
    printf("received SIGINT\n");
}

int main(void)
{
  if (signal(SIGINT, handler) == SIG_ERR)
  printf("\ncan't catch SIGINT\n");
  while(1) 
    sleep(1);
  return 0;
}
