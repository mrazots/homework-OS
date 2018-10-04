#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void* realloc1(void *ptr, size_t size) {

if (!ptr && size == 0) {
	return NULL;
} 

else if(!ptr) {
	return malloc(size);
} 

else if(size == 0) {
	free(ptr);
	return NULL;
}

void* ptr2 = malloc(size);
memcpy(ptr2, ptr, size);
free(ptr);
return ptr2;
}

int main(){
	printf("Enter size of array:");
	int n1 = 0;
	scanf("%d", &n1);
	int* a1 = malloc(n1*sizeof(int));
	int i;

	printf("Enter new size: ");
	int n2 = 0;
	scanf("%d", &n2);

  for(i = 0; i < n1; i++){
		*(a1+i) = 99;
		printf("%d ",*(a1+i));
	}

	a1 = realloc1(a1, n2*sizeof(int));
  
  printf("\n");
	for(i = 0; i < n2; i++){
		printf("%d ", *(a1 + i));
	}

	printf("\n");
	return 0;
}
