#include <stdlib.h>
#include <string.h>

int main(){
	if (ioperm(0x378, 3, 1)){
		perror("ioperm");
		exit(1);
	}
	return 0;
}
