#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[50] = "user", strrev[50];
  	int i, j;

  	j = 0;
  	for (i = 3; i >= 0; i--)
  	{
  		strrev[j++] = str[i];
  	}

  	printf("\n%s", strrev);
  
  	return 0;
}
