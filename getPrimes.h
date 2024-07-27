/* Get all the primes between two numbers.
 * First, give min value and max value.
 */
#include <stdlib.h>
void printArray(int p[],int N){
  int i;
  //printf("n is %d\n",N);
  for(i=0;i<N;i++){
    printf("%d\n",p[i]);
  }
}
int *findPrimes(int min,int max,int *N){
  char flag;
  int i,j,count=0;
  int *A;
  *N=0;
  A=NULL;
  for(i=min;i<=max;i++){
      flag = 0;
      if(i>0) {
          for (j = 2; j <= i / 2; j++) {
              if (i % j == 0) {
                  flag = 1;
                  break;
              }
          }
      }
    if(flag==0 && i>1){
        count++;
        A=realloc(A,count*sizeof(int *));
        A[count-1]=i;
    }
  }
  *N=count;
  //printf("N is %d\n",*N);
  //for(i=0;i<*N;i++) printf("%d\n",A[i]);
  return A;
}