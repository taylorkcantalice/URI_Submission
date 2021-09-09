/*
 ============================================================================
 Name        : 1805.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1805 - Soma Natural
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int a, b;
    unsigned long long soma = 0;

    scanf("%d %d", &a, &b);

    if(a > b){
        a = a - b;
        b = a + b;
        a = b - a;
    }

    while(a <= b){

        if(a >= 0){
            soma += a;
        }

        a++;
    }

    printf("%llu\n", soma);

 return 0;
}
