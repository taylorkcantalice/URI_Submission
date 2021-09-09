/**
 ============================================================================
 Nome      : 1182.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1181 - Coluna na Matriz
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, j, coluna;
    double matriz[12][12], soma = 0;
    char operacacao;

    scanf("%d%*c", &coluna);
    scanf("%c", &operacacao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        soma += matriz[i][coluna];
    }

    if(operacacao == 'S'){
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma/12);
    }

    return 0;
}
