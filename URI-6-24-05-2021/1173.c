/**
 ============================================================================
 Nome      : 1173.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1173 - Preenchimento de Vetor I
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, ar[10];

    scanf("%d", &ar[0]);
    for(i = 1; i < 10; i++){
        ar[i] = ar[i-1]*2;
    } // End For

    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, ar[i]);
    }

    return 0;
}
