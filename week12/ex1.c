#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define 

int main(){
	int rand = open("/dev/random", O_RDONLY);
	if (rand < 0){
		return -1;
	}
	else{
		char rand_data[20];
		ssize_t result = read(rand, rand_data, 20 * sizeof(char));
		if (result < 0){
			return -1;	
		}
		else{
			printf("%s\n", rand_data);
		}
	}
	return 0;
}
