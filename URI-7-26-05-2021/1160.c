/**
 ============================================================================
 Nome      : 1160.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1160 - Crescimento Populacional
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned int i, teste, pA, pG, tempo;
    double g1, g2;

    scanf("%u", &teste);

    for(i = 0; i < teste; i++){
        scanf("%u %u %lf %lf", &pA, &pG, &g1, &g2);

        tempo = 0;
        while (pA <= pG){
            pA = pA * (1 + g1/100);
            pG = pG * (1 + g2/100);
            tempo++;

            if (tempo > 100){
                printf("Mais de 1 seculo.\n");
                break;
            } // End If
        } // End While

        if (tempo <= 100){
            printf("%u anos.\n", tempo);
        } // End If
    } // End For

    return 0;
}
