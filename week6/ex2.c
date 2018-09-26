#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include<sys/wait.h> 

int main(void)
{
  int p[2],new;
  pid_t child;
  char s[] = "I love Operating Systems\n";
  char out[30];
  pipe(p);
  child = fork();
  if(child == -1){
    perror("fork");
    exit(1);
  }

  if(child > 0){
    close(p[0]);
    write(p[1], s, (strlen(s)+1));
    close(p[1]); 
    wait(NULL);
  }

  else{
    close(p[1]);
    new = read(p[0], out, sizeof(out));
    printf("String: %s", out);
    close(p[0]);
    exit(0); 
  }  

  return 0; 
}
