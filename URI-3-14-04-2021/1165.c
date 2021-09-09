/*
 ============================================================================
 Name        : 1165.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1165 - Número Primo
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, j, n, x, contador = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        scanf("%d", &x);

        for (j = 1; j <= x; j++){
            if (x % j == 0){
                contador = contador + 1;
            }
        }

        if (contador == 2){
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }

    contador = 0;

    }

 return 0;
}
