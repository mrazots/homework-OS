#include <stdio.h>
#include <stdlib.h>
   
   int main() {
      char **s;
      char foo[] = "Hello World";
      s = &foo;
      printf("s is %p\n", s);
      s[0] = foo[0];
      printf("s[0] is %s\n",s);
      
      return(0);
}
