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
    int senha;

    senha = 0;
    while(senha != 2002){

        scanf("%d", &senha);

        if (senha != 2002){
            printf("Senha Invalida\n");
        } else {
            printf("Acesso Permitido\n");
        }
    }
 return 0;
}
