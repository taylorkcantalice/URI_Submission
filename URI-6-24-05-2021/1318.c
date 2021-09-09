/**
 ============================================================================
 Nome      : 1318.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1318 - Bilhetes Falsos
 ============================================================================
 */

#include <stdio.h>

int main(void){
    int i, nBilhestes, nPessoas, nDoIndice, nDeBilhetesFalsos;
    int contador[10001] = {0};

    while(1){

        scanf("%d", &nBilhestes);
        scanf("%d", &nPessoas);
        if((nBilhestes == 0) && (nPessoas == 0)){
            break;
        }

        nDeBilhetesFalsos = 0;

        for(i = 0; i < nPessoas; i++){
            scanf("%d", &nDoIndice);
            contador[nDoIndice]++;
        }

        for(i = 0; i <= nBilhestes; i++){
            if(contador[i] > 1){
                nDeBilhetesFalsos++;
            }
            contador[i] = 0;
        }

        printf("%d\n", nDeBilhetesFalsos);
    }

    return 0;
}
