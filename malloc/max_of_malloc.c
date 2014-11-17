#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int
main()
{
  int *ptr[100];
  int i;

  for(i=0; i<100; i++){
    ptr[i] = malloc((int)pow(10.0, (double)i));
    if(ptr[i]==NULL){
      printf("Error.\n");
      break;
    }else{
      printf("Allocate %d bytes.\n", (int)pow(10.0, (double)i));
    }
  }
  
  int j;
  for(j=0; j<100 && j<i; j++){
    free(ptr[j]);
  }

  return(0);
}
