/**
 ============================================================================
 Nome      : 1221.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Primo Rápido - 1221
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int EhPrimo(int numero){
    int i, contador = 0;
    for(i = 1; i <= sqrt(numero); i++){
        if (numero % i == 0){
            contador++;
        } // End If
    } // End For

    return contador;
} // End EhPrimo()

int main(void){
    int testes, numero;

    scanf("%d", &testes);

    while(testes--){
        scanf("%d", &numero);

        if (EhPrimo(numero) == 1){
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        } // End If-Else
    } // End While

    return 0;
}
