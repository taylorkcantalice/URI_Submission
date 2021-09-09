/**
 ============================================================================
 Nome      : 1030.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1030 - A Lenda de Flavious Josephus
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int posicao = 0, salto = 1, pessoas = 10;
    int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    while(1){
        posicao = (posicao + salto) % pessoas;
        printf("array[%d] = %d\n", posicao, ar[posicao]);
    }



    return 0;
}
