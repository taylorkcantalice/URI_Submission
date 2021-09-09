/**
 ============================================================================
 Nome      : 2062.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2062 - OBI URI
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int nStrings;
    char ar[21];

    scanf("%d%*c", &nStrings);
    while(nStrings--){
        scanf("%s%*c", ar);

        if(strlen(ar) <= 3){
            if(strstr(ar, "UR") != NULL || strstr(ar, "OB") != NULL){
                ar[2] = 'I';
            }
        }

        if(nStrings == 0){
            printf("%s\n", ar);
        } else {
            printf("%s ", ar);
        }

    }

    return 0;
}
