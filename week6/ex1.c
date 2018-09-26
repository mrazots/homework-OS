#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
  int p[2],nbytes;
  char s[] = "I love Operating Systems\n";
  char out[100];
  pipe(p);
  write(p[1], s, (strlen(s)+1));
  nbytes = read(p[0], out, sizeof(out));
  printf("String: %s", out);
}
