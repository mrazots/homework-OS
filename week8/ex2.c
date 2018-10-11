#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define MB 2621440

int main()
{
	int n = 0;
	int ** m = malloc(10 * sizeof(int *));
	while (10 > n) 
	{
		*(m+ n) = malloc(MB * sizeof(int));
		memset(*(m + n), 0, MB * sizeof(int));	
		n++;
		sleep(1);
	}
	return 0;
}
