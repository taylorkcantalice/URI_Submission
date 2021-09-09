/*
 ============================================================================
 Name        : 1072.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1072 - Intervalo 2
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n, i, x;
    int contador1, contador2;

    scanf("%d", &n);

    contador1 = 0;
    contador2 = 0;

    for(i = 1; i <= n; i = i + 1){
        scanf("%d", &x);

        if((x < 10) || (x > 20)){
            contador1 = contador1 + 1;
        } else {
            contador2 = contador2 + 1;
        }
    }

    printf("%d in\n%d out\n", contador2, contador1);

 return 0;
}
