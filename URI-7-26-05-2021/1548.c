/**
 ============================================================================
 Nome      : 1548.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1548 - Fila do Recreio
 ============================================================================
 */

#include <stdio.h>

int Reodenar(int ar[], int tamanhoDoArray){
    int i, trocou;

    while(1){
        trocou = 0;
        for(i = 0; i < tamanhoDoArray - 1; i++){
            if(ar[i] < ar[i+1]){
                ar[i] = ar[i] - ar[i+1];
                ar[i+1] = ar[i] + ar[i+1];
                ar[i] = ar[i+1] - ar[i];
                trocou++;
            }
        }

        if(!trocou){
            break;
        }
    }

    return 0;

}

int main(void){
    int i, nTestes, nAlunos, naoTrocou = 0;

    scanf("%d", &nTestes);

    while(nTestes--){
        scanf("%d", &nAlunos);

        int arNotas[nAlunos], arPosicao[nAlunos];

        for(i = 0; i < nAlunos; i++){
            scanf("%d", &arNotas[i]);
            arPosicao[i] = arNotas[i];
        }

        Reodenar(arNotas, nAlunos);
        naoTrocou = 0;
        for(i = 0; i < nAlunos; i++){
            if(arNotas[i] == arPosicao[i]){
                naoTrocou++;
            }
        }

        printf("%d\n", naoTrocou);
    }

    return 0;
}
