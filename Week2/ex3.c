#include<stdio.h> 

int main() { 
int len; 
scanf("%d", &len); 
for (int i = 0; i < len; i++) { 
    for (int j = 0; j < len - i; j++) { 
        printf(" "); 
    } 
    for (int j = 0; j < 2 * i - 1; j++) { 
        printf("*"); 
    } 
    printf("\n"); 
    } 
}
