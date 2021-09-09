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
    unsigned long long int i, j, nPosicao;
    unsigned int nTestes, nPessoas, nSaltos;

    scanf("%u", &nTestes);
    for(i = 0; i < nTestes; i++){
        scanf("%u %u", &nPessoas, &nSaltos);
        unsigned long long int arVivo[nPessoas];
        for(j = 0; j < nPessoas; j++){
            arVivo[j] = j + 1;
        }

        nPosicao = 0;
        while(1){
            nPosicao = (nPosicao + nSaltos) % nPessoas;
            nPessoas--;

            if(nPessoas == 1){
                break;
            }
        }

        printf("Case %llu: %llu\n", i + 1, arVivo[nPosicao]);
    }

    return 0;
}
