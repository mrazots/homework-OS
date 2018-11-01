#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Hi\n");
	fork();
	printf("\n");
	return 0;
}
