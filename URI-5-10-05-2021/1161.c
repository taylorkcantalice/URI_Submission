/**
 ============================================================================
 Nome      : 1161.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Soma de Fatoriais - 1161
 ============================================================================
 */

#include <stdio.h>

unsigned long long Fatorial(int valor){
    unsigned long long i, somaFatorial = 1;

    for(i = 1; i <= valor; i++){
        somaFatorial *= i;
    } // End For

    return somaFatorial;
} // End Fatorial()

int main(void){
    int m, n;

    /****
    * Entrada:
    *   O arquivo de entrada contém vários casos de teste. Cada caso contém dois
    *   números inteiros M (0 <= M <= 20) e N (0 <= N <= 20). O fim da entrada é
    *   determinado por EOF(End Of File / Fim do Arquivo).
    *
    *   O EOF é utilizado para dar o comando que acabou os valores da entrada.
    ****/
    while(scanf("%d %d", &m, &n) != EOF){
        printf("%llu\n", Fatorial(m) + Fatorial(n));
    } // End While

    return 0;
}
