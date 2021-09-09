/*
 ============================================================================
 Name        : 2006.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 2006 - Identificando o Chá
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int t, p, i, contador = 0;

    scanf("%d", &t);

    for(i = 0; i < 5; i++){

        scanf("%d", &p);

        if (p == t) {
            contador++;
        } // End If
    } // End For

    printf("%d\n", contador);

 return 0;
}
