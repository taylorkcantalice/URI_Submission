/*
 ============================================================================
 Name        : 1114.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1114 - Senha Fixa
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int idade;
    double soma, contador, media;

    scanf("%d", &idade);
    soma = 0;
    contador = 0;

    while (idade > 0){
        soma = soma + idade;
        contador = contador + 1;
        scanf("%d", &idade);
    }

    media = soma/contador;
    printf("%.2lf\n", media);

 return 0;
}
