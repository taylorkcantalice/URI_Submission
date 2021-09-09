/**
 ============================================================================
 Nome      : 1553.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1553 - Perguntas mais Frequentes
 ============================================================================
 */

#include <stdio.h>

int main(void){
    unsigned short int i, nPerguntas, fatorFrequencia, nDoIndice, contador[101] = {0};
    unsigned short int nPerguntas_Frequentes = 0;

    while(1){
        scanf("%hu %hu", &nPerguntas, &fatorFrequencia);

        if(nPerguntas == 0 && fatorFrequencia == 0){
            break;
        }

        for(i = 0; i < nPerguntas; i++){
            scanf("%hu", &nDoIndice);
            contador[nDoIndice]++;
        }

        nPerguntas_Frequentes = 0;
        for(i = 0; i < 100; i++){
            if(contador[i] >= fatorFrequencia){
                nPerguntas_Frequentes++;
            }
            contador[i] = 0;
        }

        printf("%hu\n", nPerguntas_Frequentes);
    }

    return 0;
}
