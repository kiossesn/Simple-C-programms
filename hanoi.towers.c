#include <stdio.h>
int move(int N,char source,char dest,char aux) {
    //ΑΝ ΔΕΝ ΕΧΕΙ ΔΙΣΚΟΥΣ
    if (N == 0)
        return 0;
    //ΑΝ ΕΧΕΙ ΜΟΝΟ ΕΝΑΝ ΔΙΣΚΟ
    if (N == 1) {
        printf("Move a disc from %d to %d\n",source,dest);
        return 0;
    }
    //ΑΝ ΕΧΕΙ ΠΑΝΩ ΑΠΟ ΕΝΑΝ ΔΙΣΚΟ
    else {
        //ΒΗΜΑ 1
        move(N - 1, source, aux, dest);
        //ΒΗΜΑ 2
        printf("Move a disc from %d to %d\n",source,dest);
        //ΒΗΜΑ 3
        move(N - 1, aux, dest, source);
    }
}
int main(){
    //ΤΑ 1,2,3 ΣΥΜΒΟΛΙΖΟΥΝ ΤΟΝ ΑΡΙΘΜΟ ΤΗΣ ΣΤΗΛΗΣ ΚΑΙ ΟΧΙ ΤΟΝ ΑΡΙΘΜΟ ΤΩΝ ΔΙΣΚΩΝ
    char source=1,dest=2,aux=3;
    int N;
    scanf("%d",&N);
    //ΑΡΧΙΚΗ ΚΛΗΣΗ
    move(N,source,dest,aux);
}