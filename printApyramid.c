/* Give a number of pyramid levels (<=10).
 * Print a pyramid of * (stars).
 */
#include <stdio.h>
int main(){
    int N,i=1,a=0,z;
    scanf("%d",&N);
    if (N<11 && N>0) {
        while (N>0)
        {
            a=i;

            for (z=1;z<N;z++)
                printf(" ");
            while (a>0) {
                printf("*");
                a -= 1;
            }
            printf("\n");
            i+=2;
            N-=1;
        }

    }
    else
        printf("Wrong Input");

}