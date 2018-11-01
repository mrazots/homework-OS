#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Hi");
	fork();
	printf("\n");
	return 0;
}
