/**
 ============================================================================
 Nome      : 1281.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1281 - Ida à Feira
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i, j, nTestes, nFrutas, nCompras;
    double totalCompras;

    scanf("%d%*c", &nTestes);
    while(nTestes--){

        scanf("%d%*c", &nFrutas);

        char str[nFrutas][51];
        double ar_Preco[nFrutas];

        for(i = 0; i < nFrutas; i++){
            scanf("%s %lf", str[i], &ar_Preco[i]);
        }

        scanf("%d%*c", &nCompras);

        char str_Compras[nCompras][51];
        double ar_Unidades[nCompras];

        for(i = 0; i < nCompras; i++){
            scanf("%s %lf", str_Compras[i], &ar_Unidades[i]);
        }

        totalCompras = 0;
        for(i = 0; i < nCompras; i++){
            for(j = 0; j < nFrutas; j++){
                if(!strcmp(str_Compras[i], str[j])){
                    totalCompras += ar_Unidades[i] * ar_Preco[j];
                }
            }
        }

        printf("R$ %.2lf\n", totalCompras);
    }

    return 0;
}
