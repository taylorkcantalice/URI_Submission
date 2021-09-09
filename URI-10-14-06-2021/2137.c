/**
 ============================================================================
 Nome      : 2137.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2137 - A Biblioteca do Senhor Severino
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i, nLivros,trocou, a, b;
    char aux_Codigo[5];

    while(scanf("%d", &nLivros) != EOF){

        char Codigo_Livro[nLivros][5];

        for(i = 0; i < nLivros; i++){
            scanf("%s%*c", Codigo_Livro[i]);
        }

        trocou = 1;
        while(trocou){
            trocou = 0;
            for(i = 0; i < nLivros-1; i++){
                a = atoi(Codigo_Livro[i]);
                b = atoi(Codigo_Livro[i+1]);
                if(a > b){
                    strcpy(aux_Codigo, Codigo_Livro[i]);
                    strcpy(Codigo_Livro[i], Codigo_Livro[i+1]);
                    strcpy(Codigo_Livro[i+1], aux_Codigo);

                    trocou = 1;
                }
            }
        }

        for(i = 0; i < nLivros; i++){
            printf("%s\n", Codigo_Livro[i]);
        }

    }

    return 0;
}
