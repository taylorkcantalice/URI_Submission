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
    unsigned int i, j, nPosicao;
    unsigned int nTestes, nPessoas, nSaltos;

    scanf("%u", &nTestes);
    for(i = 1; i <= nTestes; i++){
        scanf("%u %u", &nPessoas, &nSaltos);

        unsigned int arVivo[nPessoas];

        for(j = 0; j < nPessoas; j++){
            arVivo[j] = j + 1;
        }

        nPosicao = 0;
        for(j = 2; j <= nPessoas; j++){
            nPosicao = (nPosicao + nSaltos) % j;
        }

        printf("Case %u: %u\n", i, arVivo[nPosicao]);
    }
    return 0;
}
