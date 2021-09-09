/**
 ============================================================================
 Nome      : 2060.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2060 - Desafio de Bino
 ============================================================================
 */

#include <stdio.h>

int EhMultiploDeDois (int valor, int *p2){
    if(valor % 2 == 0){
        *p2 += 1;
        return 1;
    }
    return 0;
}

int EhMultiploDeTres (int valor, int *p3){
    if(valor % 3 == 0){
        *p3 += 1;
        return 1;
    }
    return 0;
}

int EhMultiploDeQuatro (int valor,int *p4){
    if(valor % 4 == 0){
        *p4 += 1;
        return 1;
    }
    return 0;
}

int EhMultiploDeCinco (int valor, int *p5){
    if(valor % 5 == 0){
        *p5 += 1;
        return 1;
    }
    return 0;
}

int main(void){
    int i, nDaLista;
    int p2, p3, p4, p5;

    scanf("%d", &nDaLista);

    int ar[nDaLista];

    for(i = 0; i < nDaLista; i++){
        scanf("%d", &ar[i]);
    }

    p2 = p3 = p4 = p5 = 0;
    for(i = 0; i < nDaLista; i++){
        EhMultiploDeDois(ar[i], &p2);
        EhMultiploDeTres(ar[i], &p3);
        EhMultiploDeQuatro(ar[i], &p4);
        EhMultiploDeCinco(ar[i], &p5);
    }

    printf("%d Multiplo(s) de 2\n", p2);
    printf("%d Multiplo(s) de 3\n", p3);
    printf("%d Multiplo(s) de 4\n", p4);
    printf("%d Multiplo(s) de 5\n", p5);

    return 0;
}
