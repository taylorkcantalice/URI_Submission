/*
 ============================================================================
 Name        : 1221.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1221 - Primo Rápido
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int main(void){
    int i, j, n, x, contador;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &x);

        for(j = 1; j <= sqrt(x); j++){
            if (x % j == 0){
                contador += 1;
            }
        }

        switch (contador){
            case 1:
                printf("Prime\n");
                break;
            default:
                printf("Not Prime\n");
        }

        contador = 0;
    }

 return 0;
}
