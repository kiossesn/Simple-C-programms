/* Give a month (integer).
 * Get number of days the month has.
 */
#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    if (a<8) {
        if (a % 2 == 1)
            printf("31");
        else {
            if (a == 2)
                printf("28 or 29 in leap years");
            else
                printf("30");
        }
    }
    else {
        if (a % 2 == 1)
            printf("30");
        else
            printf("31");
    }
}