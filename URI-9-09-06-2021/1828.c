/**
 ============================================================================
 Nome      : 1828.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1828 - Bazinga!
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    unsigned int i, nTestes, resultado, tamanho;
    char jogo[20];
    char *reacao;

    scanf("%d%*c", &nTestes);
    for(i = 1; i <= nTestes; i++){
        fgets(jogo, 20, stdin);
        tamanho = strlen(jogo);
        jogo[tamanho - 1] = '\0';

        if(!strcmp(jogo, "pedra pedra")){
            resultado = 1;
        } else if(!strcmp(jogo, "papel papel")){
            resultado = 1;
        } else if(!strcmp(jogo, "tesoura tesoura")){
            resultado = 1;
        } else if(!strcmp(jogo, "lagarto lagarto")){
            resultado = 1;
        } else if(!strcmp(jogo, "Spock Spock")){
            resultado = 1;
        }else if(!strcmp(jogo, "pedra lagarto")){
            resultado = 2;
        } else if(!strcmp(jogo, "pedra tesoura")){
            resultado = 2;
        } else if(!strcmp(jogo, "papel pedra")){
            resultado = 2;
        } else if(!strcmp(jogo, "papel Spock")){
            resultado = 2;
        } else if(!strcmp(jogo, "tesoura papel")){
            resultado = 2;
        } else if(!strcmp(jogo, "tesoura lagarto")){
            resultado = 2;
        } else if(!strcmp(jogo, "lagarto Spock")){
            resultado = 2;
        } else if(!strcmp(jogo, "lagarto papel")){
            resultado = 2;
        } else if(!strcmp(jogo, "Spock tesoura")){
            resultado = 2;
        } else if(!strcmp(jogo, "Spock pedra")){
            resultado = 2;
        } else {
            resultado = 3;
        }


        switch (resultado){
            case 1:
                reacao = "De novo!";
                break;
            case 2:
                reacao = "Bazinga!";
                break;
            case 3:
                reacao = "Raj trapaceou!";
                break;
        }

        printf("Caso #%d: %s\n", i, reacao);
    }

    return 0;
}
