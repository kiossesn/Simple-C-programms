/* Give a number.
 * Learn if it's a kaprekar number.
 */
#include <stdio.h>
#include<math.h>
char iskaprekar(int N){
    int n,p,A,B;
    char flag=0;
    n=pow(N,2);
    //printf("n is %d\n",n);
    p=log10(n);
    p=p+1;
    while (flag==0 && p>0) {
        //printf("p is %d\n",p);
        A = n / pow(10, p);
        //printf("A is %d\n", A);
        B = n % (int) pow(10, p);
        //printf("B is %d\n", B);
        if (A + B == N) {
            flag = 1;
            printf("%d + %d = %d",A,B,N);
            return flag;
        }
        p--;
    }
    return flag;
}

int main(){
    int N;

    scanf("%d",&N);
    if (N<0)
        printf("Wrong Input");
    else{
        if (iskaprekar(N)==0)
            printf("Not Kaprekar");
    }
}