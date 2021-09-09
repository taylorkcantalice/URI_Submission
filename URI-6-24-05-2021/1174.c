/**
 ============================================================================
 Nome      : 1174.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1174 - Seleçao em Vetor I
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i;
    double ar[10];

    for(i = 0; i < 10; i++){
        scanf("%lf", &ar[i]);
    } // End For

    for(i = 0; i < 10; i++){
        if(ar[i] <= 10){
            printf("A[%d] = %.1lf\n", i, ar[i]);
        }
    }

    return 0;
}
