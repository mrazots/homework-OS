#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(void) {
   int PID = fork();
   int n = 811;
   if(PID > 0){
       printf("Hello from parent [%d - %d]\n", PID, n);
   }
   else if(PID == 0){
       printf("Hello from child [%d - %d]\n", PID, n);
   }
   return 0;
}
