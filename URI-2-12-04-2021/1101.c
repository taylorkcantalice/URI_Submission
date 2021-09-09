/*
 ============================================================================
 Name        : 1101.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1101 - Sequência de Números e Soma
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int m, n, x;
    int soma;

    scanf("%d %d", &m, &n);

    if (m > n){
            x = m;
            m = n;
            n = x;
    }

    while((m > 1)){
        soma = 0;

        while(m <= n){
            printf("%d ", m);
            soma = soma + m;
            m = m + 1;
        }

        printf("Sum=%d\n", soma);

        scanf("%d %d", &m, &n);
        if (m > n){
            x = m;
            m = n;
            n = x;
        }
    }

 return 0;
}
