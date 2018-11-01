#include <stdio.h>
#include <unistd.h>

int main()
{
	char buff[256];
	int rs = setvbuf(stdout, buff, _IOLBF, 256);

	printf("H");
	sleep(1);
	printf("e");
	sleep(1);
	printf("l");
	sleep(1);
	printf("l");
	sleep(1);
	printf("o");
	sleep(1);
	printf("\n");
	
	return 0;	
}
