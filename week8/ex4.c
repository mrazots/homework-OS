
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>

#define MB 2621440

int main()
{
	int n = 0;
	int ** m = malloc(10 * sizeof(int *));
	while (10 > n) 
	{
		*(m + n) = malloc(MB * sizeof(int));
		memset(*(m + n), 0, MB * sizeof(int));
		struct rusage m_usg;	
		int result = getrusage(RUSAGE_SELF, &m_usg);
		printf("Memory usage - %ld kB\n", m_usg.ru_maxrss);
		n++;
		sleep(1);
	}

	return 0;
}
