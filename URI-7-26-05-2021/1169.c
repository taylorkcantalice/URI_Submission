/**
 ============================================================================
 Nome      : 1169.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1169 - Trigo no Tabuleiro
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    unsigned short int nTestes, nCasasDoTabuleiro;
    unsigned long long int trigoKg;

    scanf("%hu", &nTestes);
    while(nTestes--){
        scanf("%hu", &nCasasDoTabuleiro);
        trigoKg = (pow(2, nCasasDoTabuleiro) * 0.001) / 12;
        printf("%llu kg\n", trigoKg);
    }

    return 0;
}
