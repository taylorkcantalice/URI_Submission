/**
 ============================================================================
 Nome      : 1555.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Funções - 1555
 ============================================================================
 */

#include <stdio.h>

int Rafael(int x, int y){
    return (3*x)*(3*x) + y*y;
} // End Rafael()

int Beto(int x, int y){
    return 2*(x*x) + (5*y)*(5*y);
} // End Beto()

int Carlos(int x, int y){
    return (-100*x) + (y*y*y);
} // End Carlos()

int main(void){
    int testes, x, y;
    int rafael, beto, carlos;

    scanf("%d", &testes);

    while(testes--){
        scanf("%d %d", &x, &y);

        rafael = Rafael(x, y);
        beto = Beto(x, y);
        carlos = Carlos(x, y);

        if ((rafael > beto) && (rafael > carlos)){
            printf("Rafael ganhou\n");
        } else if ((beto > rafael) && (beto > carlos)){
            printf("Beto ganhou\n");
        } else if ((carlos > rafael) && (carlos > beto)){
            printf("Carlos ganhou\n");
        } // End If-Else Aninhado
    } // End While

    return 0;
}
