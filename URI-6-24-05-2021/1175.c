/**
 ============================================================================
 Nome      : 1175.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1175 - Troca em Vetor I
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, tamanhoDoArray, nDoIndice;
    int contador[2001] = {0};
    // Índice 2001, porque vão existir 2000 possiveis valores diferentes para serem armazenados

    scanf("%d", &tamanhoDoArray);

    for(i = 0; i < tamanhoDoArray; i++){
        scanf("%d", &nDoIndice);
        contador[nDoIndice]++;
    }

    for(i = 0; i < 2001; i++){
        if(contador[i] > 0){
            printf("%d aparece %d vez(es)\n", i, contador[i]);
        }
    }

    return 0;
}
