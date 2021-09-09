/*
 ============================================================================
 Name        : 1164.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1164 - Número Perfeito
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, j, n, x, soma;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        scanf("%d", &x);
        soma = 0;

        for(j = 1; j < x; j++){
            if (x % j == 0){
            soma = soma + j;
            }
        }

        if(soma == x){
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }

    }

 return 0;
}
