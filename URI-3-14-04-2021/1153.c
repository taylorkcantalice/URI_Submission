/*
 ============================================================================
 Name        : 1153.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1153 - Fatorial Simples
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, n, fatorial = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }

    printf("%d\n", fatorial);

 return 0;
}
