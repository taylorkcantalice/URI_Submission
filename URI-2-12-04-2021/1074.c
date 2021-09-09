/*
 ============================================================================
 Name        : 1074c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1074 - Par ou Ímpar
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int n, i, numero;


    scanf("%d", &n);

    for(i = 1; i <= n; i = i + 1){
        scanf("%d", &numero);

        if(numero == 0){
            printf("NULL\n");
        }

        if((numero % 2 == 0) && (numero != 0)) {
            printf("EVEN ");
        } else if ((numero % 2) && (numero != 0)) {
            printf("ODD ");
        }

        if((numero > 0) && (numero != 0)) {
            printf("POSITIVE\n");
        } else if ((numero < 0) && (numero != 0)){
            printf("NEGATIVE\n");
        }

    }

 return 0;
}
