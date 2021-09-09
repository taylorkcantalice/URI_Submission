/**
 ============================================================================
 Nome      : 2253.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2253 - Validador de Senhas
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SenhaValida (const char *senha){
    int i, min = 0, max = 0, num = 0, tamanhoDaString;

    tamanhoDaString = strlen(senha);

    // Determinar se a senha se enquadra no intervalo de tamanho valido
    if(tamanhoDaString < 6 || tamanhoDaString > 32){
        return 0;
    } else {
        // 'for' para analisar os caracters da senha
        for(i = 0; i < tamanhoDaString; i++){
            if(senha[i] >= '0' && senha[i] <= '9'){
                num = 1;
                //printf("num = %c\n", senha[i]);
            } else if(senha[i] >= 'A' && senha[i] <= 'Z'){
                min = 1;
                //printf("min = %c\n", senha[i]);
            } else if(senha[i] >= 'a' && senha[i] <= 'z'){
                max = 1;
                //printf("max = %c\n", senha[i]);
            } else {
                // Caso a senha tenha algum caracter diferente já é considerada invalida
                return 0;
            }
        }
    }
    return min * max * num;
}

int main(void){
    char ar[1000];
    int i;

    while(fgets(ar, 1000, stdin) != NULL){

        for(i = 0; ar[i] >= ' '; i++);
        ar[i] = '\0';

        printf(SenhaValida(ar) ? "Senha valida.\n" : "Senha invalida.\n");
    }

    return 0;
}
