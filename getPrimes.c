/* Get all the primes between two numbers.
 * First, give min value and max value.
 */
#include <stdio.h>
#include "getPrimes.h"
int main(void){
    int min,max;
    int *primes, n;
    scanf ("%d %d",&min,&max);
    primes = findPrimes(min,max,&n);
    printArray(primes,n);
    return 0;
}