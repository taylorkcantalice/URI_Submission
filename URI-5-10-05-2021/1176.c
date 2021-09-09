/**
 ============================================================================
 Nome      : 1176.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Fibonacci em Vetor - 1176
 ============================================================================
 */

#include <stdio.h>

unsigned long long Fibonacci(int numero){
    unsigned long long i, a = 0, b = 1, soma = 0;

    for (i = 1; i <= numero; i++){
        a = b;
        b = soma;
        soma = a + b;
    } // End For

    return soma;
} // End Fibonacci()

int main(void){
    int testes, valor;

    scanf("%d", &testes);

    while (testes--){
        scanf("%d", &valor);

        printf("Fib(%d) = %llu\n", valor, Fibonacci(valor));
    } // End While

    return 0;
}
