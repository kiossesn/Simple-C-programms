/* Draw a box of * (stars).
 * N: side length
 * w: width (must be <=N/2)
 */
#include<stdio.h>
int main(){
    int N,w,i,temp,z,b,g;
    scanf("%d %d",&N,&w);
    if (N>=2 && N<=13 && w>=1 && 2*w<=N) {
        /*temp=w;
        while (w > 0) {
            for (i = 1; i <= N; i++) {
                printf("*");
            }
            if(w>0) {
                printf("\n");
                w--;
            }
        }
        for(z=1;z<=N-2*temp;z++) {
            for (i = 1; i <= temp; i++)
                printf("*");
            for (i = 1; i <= N-2*temp; i++)
                printf(" ");
            for (i = 1; i <= temp; i++)
                printf("*");
            printf("\n");
        }
        while (temp > 0) {
            for (i = 1; i <= N; i++) {
                printf("*");
            }
            if(temp>0) {
                printf("\n");
                temp--;
            }
        }*/
        for (i = 0; i < N; i++) {
            if (i >= w && i <= (N - w) -1)
                b = 1;
            else
                b = 0;

            for (z = 0; z < N; z++) {
                if (z >= w && z <= (N - w) -1)
                    g = 1;
                else
                    g = 0;

               if(b==1 && g==1)
                    printf(" ");
                /*else if (b==1 && g==0)
                    printf("*");*/
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    else
        printf("Wrong Input");
}
