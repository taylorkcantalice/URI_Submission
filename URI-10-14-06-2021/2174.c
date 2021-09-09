/**
 ============================================================================
 Nome      : 2174.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2174 - Coleção de Pomekon
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i, j, k, nPokemons;

    scanf("%d%*c", &nPokemons);

    char Nome_Pokemon[nPokemons][1001];
    for(i = 0; i < nPokemons; i++){
        scanf("%s%*c", Nome_Pokemon[i]);
    }

    for(i = 0; i < nPokemons; i++){
        for(j = i+1; j < nPokemons; ){
            if(strcmp(Nome_Pokemon[i], Nome_Pokemon[j]) == 0){
                for(k = j; k < nPokemons-1; ++k){
                    strcpy(Nome_Pokemon[k], Nome_Pokemon[k+1]);
                }
                nPokemons--;
            } else {
                j++;
            }
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151 - nPokemons);

    return 0;
}
