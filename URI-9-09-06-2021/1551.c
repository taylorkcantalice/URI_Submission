/**
 ============================================================================
 Nome      : 1551.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1551 - Frase Completa
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i, nTestes;
    char ar[1004];
    unsigned int contador[1004] = {0}, palavras_ABC;
    size_t tamanho;

    scanf("%d%*c", &nTestes);
    while(nTestes--){

        fgets(ar, 1004, stdin);
        tamanho = strlen(ar);
        ar[tamanho-1] = '\0';

        tamanho = strlen(ar);
        for(i = 0; i < tamanho; i++){
            contador[ar[i]]++;
        }

        palavras_ABC = 0;
        for(i = 'a'; i <= 'z'; i++){
            if(contador[i] >= 1){
                palavras_ABC++;
            }
            contador[i] = 0;
        }

        if(palavras_ABC == 26){
            printf("frase completa\n");
        }else if(palavras_ABC >= 13){
            printf("frase quase completa\n");
        }else if(palavras_ABC < 13){
            printf("frase mal elaborada\n");
        }

    }

    return 0;
}
