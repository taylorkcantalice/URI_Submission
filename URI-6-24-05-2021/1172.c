/**
 ============================================================================
 Nome      : 1172.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1172 - Substituição em Vetor I
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, ar[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &ar[i]);
        if(ar[i] <= 0){
            ar[i] = 1;
            continue;
        }
    } // End For

    for(i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, ar[i]);
    }

    return 0;
}
