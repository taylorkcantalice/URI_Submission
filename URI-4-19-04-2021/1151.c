/*
 ============================================================================
 Name        : 1151.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1151 - Fibonacci Fácil
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int n, i, a = 0, b = 1, soma = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d%c", soma, (i != n ? ' ' : '\n'));
        a = b;
        b = soma;
        soma = a + b;
    }

 return 0;
}
