/* Give a message to encrypt.
 * Get hash string.
 * Then do the opposite.
 * Just swift each letter by two on the ascii value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i,j;
    char k='y';
    printf("*****ENCRYPTION*****\n");
    for(j=0;k=='y';j++) {
        char s1[20],s2[20];
        printf("Give message:\n");
        scanf(" ");
        fgets(s1, 20, stdin);
        s1[strcspn(s1, "\n")] = '\0';
        for (i = 0; i < strlen(s1); i++) s2[i] = (char) (s1[i] + 2);
        printf("Hashed message: %s\n", s2);
        printf("continue? y/n\n");
        scanf("%c",&k);
    }
    k='y';
    printf("*****DECRYPTION*****\n");
    for(j=0;k=='y';j++) {
        char s3[20],s4[20];
        printf("Give hashed message:\n");
        scanf(" ");
        fgets(s3, 20, stdin);
        s3[strcspn(s3, "\n")] = '\0';
        for (i = 0; i < strlen(s3); i++) s4[i] = (char) (s3[i] - 2);
        printf("message: %s\n", s4);
        printf("continue? y/n\n");
        scanf("%c",&k);
    }
}
