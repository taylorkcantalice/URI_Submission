/**
 ============================================================================
 Nome      : 1228.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1228 - Grid de Largada
 ============================================================================
 */

#include <stdio.h>

int main(void){
    unsigned short int i, j, nCompetidores, ultrapassagens, troca;
    unsigned short int largada[24] = {0}, chegada[24] = {0}, nPosicao[24] = {0};

    while(scanf("%hu", &nCompetidores) != EOF){

        for(i = 0; i < nCompetidores; i++){
            scanf("%hu", &largada[i]);
        }
        for(i = 0; i < nCompetidores; i++){
            scanf("%hu", &chegada[i]);
        }

        for(i = 0; i < nCompetidores; i++){
            for(j = 0; j < nCompetidores; j++){
                if(largada[i] == chegada[j]){
                    nPosicao[j] = i + 1;
                }
            }
        }

        troca = 1;
        ultrapassagens = 0;

        do{
            troca = 0;
            for(i = 0; i < nCompetidores - 1; i++){
                if(nPosicao[i] > nPosicao[i + 1]){
                    nPosicao[i] = nPosicao[i] - nPosicao[i+1];
                    nPosicao[i+1] = nPosicao[i] + nPosicao[i+1];
                    nPosicao[i] = nPosicao[i+1] - nPosicao[i];

                    troca++;
                    ultrapassagens++;
                }
            }
        }while(troca);

        printf("%hu\n", ultrapassagens);
    }

    return 0;
}
