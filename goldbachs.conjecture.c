/* Give an even integer over 2 (N).
 * Get two prime numbers that add up to this number.
 */
#include <stdio.h>
int main() {
    int N, i, p, q, num, num2, z;
    scanf("%d", &N);
    if (N % 2 == 0 && N > 2) {
        for (p = 1;; p++) {
            num=0;
            num2=0;
            q = N - p;
            for (i=1; i<=p; i++) {
                if (p % i == 0)
                    num++;
                if (num2>2)
                    break;
            }
            if (num==2)
            {   for (i=1; i<=q; i++)
                {   if (q % i == 0)
                      num2++;
                    if (num2>2)
                        break;
                }
            }
            if (num==2 && num2==2)
                break;
        }
        printf("%d+%d=%d", p, q, N);
    }
    else
        printf("Wrong Input");
}