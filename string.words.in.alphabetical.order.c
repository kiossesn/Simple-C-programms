/* Give a string with plenty of words (text).
 * Get each word of the text in alphabetical order.
 * Only words, no numbers.
 */
#include <stdio.h>
#include <string.h>
void sort(char B[200][200],int line,int size[]){
    char temp1[199],temp2;
    int i,j;
    for(i=1;i<line;i++) {
        for (j = line-1; j >=i; j--) {
            if (strcmp(B[j],B[j-1])<0) {
                strcpy(temp1,B[j]);
                strcpy(B[j],B[j-1]);
                strcpy(B[j-1],temp1);
                temp2=size[j];
                size[j]=size[j-1];
                size[j-1]=temp2;
            }
        }
    }
    for (i = 0; i < line; i++) {
        if (i>0)
            printf("\n");
        for (j = 0; B[i][j]!='\0'; j++)
            printf("%c", B[i][j]);
    }
    //for (i = 0; i <line; i++)
        //printf("size is %d\n",size[i]);
}
int main() {
    char A[200], B[200][200];
    int i = 0, j = -1, k = 0,line=1,size[200],z=0;
    fgets(A, 200, stdin);
    A[strcspn(A, "\n")] = '\0';

    for (i = 0; i < 200; i++)
        size[i]=0;
    //printf("strlen(A) is %d\n", strlen(A));
    for (i = 0; i < strlen(A); i++) {
        if (A[i] >= 'A' && A[i] <= 'z') {
            j++;
            size[z]++;
            B[k][j] = A[i];
            //printf("in b is letter %c\n",B[k][j]);
        }
        else if (A[i+1]>='A'&& A[i+1]<='z'&& i>0){
            //printf("change line\n");
            z++;
            line++;
            k++;
            j = -1;
        }
    }
    //printf("lines are %d\n",line);
    //for (i = 0; i <line; i++)
        //printf("size is %d\n",size[i]);
    sort(B,line,size);
}



