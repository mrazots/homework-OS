#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
  
void *threaddd(void *vargp) 
{ 
    int *id = (int *)vargp;
    static int s = 0;  
    printf("id: %d\n", *id); 
}
  

int main(){
  int n; 
  scanf("%d",&n);
  pthread_t thread_id;
  pthread_t thread2[n]; 
    for (int i = 0; i < n; ++i)
    {
      pthread_create(&thread2[i], NULL, threaddd, (void *)&thread2[i]); 
    }
    for (int i = 0; i < n; ++i)
    {
      pthread_join(thread2[i],NULL);
    }
  for (int i = 0; i < n; i ++){
    pthread_create(&thread_id, NULL, threaddd, (void *)&thread_id);
    pthread_join(thread_id, NULL);
  }
  pthread_exit(NULL);
}  
