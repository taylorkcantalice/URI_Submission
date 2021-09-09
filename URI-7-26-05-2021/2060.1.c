/**
 ============================================================================
 Nome      : 2060.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2060 - Desafio de Bino
 ============================================================================
 */

#include <stdio.h>

int EhMultiploDeDois (int valor, int mult[]){
    if(valor % 2 == 0){
        mult[0]++;
        return 1;
    }
    return 0;
}

int EhMultiploDeTres (int valor, int mult[]){
    if(valor % 3 == 0){
        mult[1]++;
        return 1;
    }
    return 0;
}

int EhMultiploDeQuatro (int valor,int mult[]){
    if(valor % 4 == 0){
        mult[2]++;
        return 1;
    }
    return 0;
}

int EhMultiploDeCinco (int valor, int mult[]){
    if(valor % 5 == 0){
        mult[3]++;
        return 1;
    }
    return 0;
}

int main(void){
    int i, nDaLista;
    int mult[4] = {0};

    scanf("%d", &nDaLista);

    int ar[nDaLista];

    for(i = 0; i < nDaLista; i++){
        scanf("%d", &ar[i]);
    }

    for(i = 0; i < nDaLista; i++){
        EhMultiploDeDois(ar[i], mult);
        EhMultiploDeTres(ar[i], mult);
        EhMultiploDeQuatro(ar[i], mult);
        EhMultiploDeCinco(ar[i], mult);
    }

    for(i = 0; i < 4; i++){
        printf("%d Multiplo(s) de %d\n", mult[i], i + 2);
    }

    return 0;
}
