/**
 ============================================================================
 Nome      : 2356.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2356 - Bactéria I
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char DNA[101], codigo_ACGT[101];

    while(scanf("%s%*c", DNA) != EOF){
        scanf("%s%*c", codigo_ACGT);

        if(strstr(DNA, codigo_ACGT) != NULL){
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }
    }

    return 0;
}
