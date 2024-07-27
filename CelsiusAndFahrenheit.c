/* Give a temperature and a metric ("c" for Celsius or "f" for Fahrenheit).
 * Get the temperature in Celsius and Fahrenheit.
 */
#include <stdio.h>

int main() {
    float t, cel, fahr;
    char d;
    scanf("%f %c", &t, &d);

    // printf ("%f %c\n",t,d);

    if (t!=0){
        if (d == 'c') {
            cel = t;
            fahr = (float) 9 / 5 * cel + 32;
        }
        else if (d == 'f') {
            fahr = t;
            cel = (float) 5 / 9 * (fahr - 32);
        }
        else {
            fahr = 0;
            cel = 0;
        }
        if (fahr == 0 || cel == 0) {
            printf("wrong input\n");
            return 1;
        }
        if (t<0)
            printf("%4.1f°C, %4.1f°F", cel, fahr);
        else
            printf("%4.1f°C, %4.1f°F", cel, fahr);
    }
    else {
        if (d == 'c')
            printf("0.0°C, 32.0°F");
        else
            if (d == 'f')
                printf("-17.8°C, 0.0°F");
    }
    return 0;
}
