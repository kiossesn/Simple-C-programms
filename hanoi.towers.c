/* This program solves the hanoi tower problem.
 * Give the number of disks.
 * Get the moves you have to do to solve the problem.
 * The program is recursive.
 */
#include <stdio.h>
int move(int N,char source,char dest,char aux) {
    // No disks at all
    if (N == 0)
        return 0;
    // Just one disk
    if (N == 1) {
        printf("Move a disc from %d to %d\n",source,dest);
        return 0;
    }
    // Over one disk
    else {
        // Step 1
        move(N - 1, source, aux, dest);
        // Step 2
        printf("Move a disc from %d to %d\n",source,dest);
        // Step 3
        move(N - 1, aux, dest, source);
    }
}

int main(){
    // 1,2,3 symbolizes the number of the column not the disk number (there are 3 columns)
    char source=1,dest=2,aux=3;
    int N;
    printf("Give the number of the disks: ");
    scanf("%d",&N);
    // Initial call
    move(N,source,dest,aux);
}