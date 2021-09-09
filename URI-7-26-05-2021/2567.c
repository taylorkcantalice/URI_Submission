/**
 ============================================================================
 Nome      : 2567.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2567 - Virus
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

int EhImpar(int valor){
    if(valor % 2 != 0){
        return 1;
    }

    return 0;
}

int NivelDeLetalidade(int ar[], int tamanhoDoArray, int ehImpar){
    int i, x, soma = 0;

    /*
    * Quando o tamanho do array é um valor ímpar, essa função ignora o valor do elemento central.
    */
    if(ehImpar){
        x = 3;
    } else {
        x = 2;
    }

    for(i = 0; i < tamanhoDoArray; i++){
        soma += ar[i] - ar[tamanhoDoArray - i - 1];
        if(i == tamanhoDoArray - i - x){
            break;
        }
    }

    return soma;
}

int main(void){
    int i, nVirus;

    while(scanf("%d", &nVirus) != EOF){
        int idadeVirus[nVirus];

        for(i = 0; i < nVirus; i++){
            scanf("%d", &idadeVirus[i]);
        }
        Reodenar(idadeVirus, nVirus);

        printf("%d\n", NivelDeLetalidade(idadeVirus, nVirus, EhImpar(nVirus)));
    }

    return 0;
}
