/**
 ============================================================================
 Nome      : 2334.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2334 - Patinhos
 ============================================================================
 */

#include <stdio.h>

int main(void){
    long long unsigned totalDePatinhos;

    while(1){
        scanf("%llu", &totalDePatinhos);

        if(totalDePatinhos == -1){
            break;
        }

        if(totalDePatinhos == 0){
            printf("0\n");
        } else {
            printf("%llu\n", totalDePatinhos - 1);
        }
    }

    return 0;
}
