/**
 ============================================================================
 Nome      : 2222.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2222 - Brincando com Conjuntos
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, j, operador, conjunto1, conjunto2, elem1, elem2, contador;
    int nTestes, nConjuntos, nElementos, nOperacoes;

    scanf("%d", &nTestes);
    while(nTestes--){

        scanf("%d", &nConjuntos);
        int matriz[nConjuntos][61];
        for(i = 0; i < nConjuntos; i++){
            scanf("%d", &matriz[i][0]);
            nElementos = matriz[i][0];

            for(j = 0; j < nElementos; j++){
                scanf("%d", &matriz[i][j+1]);
            }
        }

        scanf("%d", &nOperacoes);
        do{
            scanf("%d %d %d", &operador, &conjunto1, &conjunto2);
            contador = 0;

            elem1 = matriz[conjunto1-1][0];
            elem2 = matriz[conjunto2-1][0];

            for(i = 1; i <= elem1; i++){
                for(j = 1; j <= elem2; j++){
                    if(matriz[conjunto1-1][i] == matriz[conjunto2-1][j]){
                        contador++;
                    }
                }
            }

            if(operador == 1){
                printf("%d\n", contador);
            } else {
                printf("%d\n", elem1 + elem2 - contador);
            }
        }while(--nOperacoes);
    }


    return 0;
}
