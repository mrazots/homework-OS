#include<stdio.h> 


void swap(int *, int *);
int main() { 
    int a, b; 
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a,&b);
    printf("%d, %d", a,  b);
}
void swap(int *a, int *b)
{
   int t;
 
   t  = *b;
   *b = *a;
   *a = t;
}
