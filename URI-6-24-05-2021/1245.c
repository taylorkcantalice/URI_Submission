/**
 ============================================================================
 Nome      : 1245.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1245 - Botas Perdidas
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, j, ehPar, nBotas_INDIVIDUAL;

    while(scanf("%d", &nBotas_INDIVIDUAL) != EOF){

        int numeracaoDaBota[nBotas_INDIVIDUAL];
        char peDaBota[nBotas_INDIVIDUAL];

        for(i = 0; i < nBotas_INDIVIDUAL; i++){
            scanf("%d%*c", &numeracaoDaBota[i]);
            scanf("%c", &peDaBota[i]);
        }

        ehPar = 0;
        for(i = 0; i < nBotas_INDIVIDUAL; i++){
            for(j = 1 + i; j <= nBotas_INDIVIDUAL; j++){
                if((peDaBota[i] != peDaBota[j]) && (numeracaoDaBota[i] == numeracaoDaBota[j]) && (peDaBota[i] != 'X') && (peDaBota[j] != 'X')){
                    ehPar++;
                    peDaBota[i] = 'X';
                    peDaBota[j] = 'X';
                }
            }
        }

        printf("%d\n", ehPar);
    }

    return 0;
}
