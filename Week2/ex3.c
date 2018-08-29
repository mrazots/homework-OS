
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[50], strrev[50];
  	int i, j, len;
    scanf("%s", str); 
    len = strlen(str);
  	j = 0;
  	for (i = len - 1; i >= 0; i--)
  	{
  		strrev[j++] = str[i];
  	}

  	printf("\n%s", strrev);
  
  	return 0;
}
