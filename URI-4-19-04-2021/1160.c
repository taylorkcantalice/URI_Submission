/*
 ============================================================================
 Name        : 1160.c
 Author      : Taylor Klaus Cantalice Nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : 1160 - Crescimento Populacional
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int i, teste, pA, pB, tempo;
    double gA, gB;

    scanf("%d", &teste);

    for(i = 1; i <= teste; i++){
        scanf("%d %d %lf %lf", &pA, &pB, &gA, &gB);

        tempo = 0;
        while (pA <= pB){
            pA = pA * (1 + gA/100);
            pB = pB * (1 + gB/100);
            tempo++;

            if (tempo > 100){
                printf("Mais de 1 seculo.\n");
                break;
            } // End If
        } // End While

        if (tempo <= 100){
            printf("%d anos.\n", tempo);
        } // End If
    } // End For

 return 0;
}
