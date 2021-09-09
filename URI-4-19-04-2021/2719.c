/*
 ============================================================================
 Name        : 2719.c
 Author      : Taylor Klaus Cantalice Nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : 2719 - Quantas Viagens Fará o Noel?
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int i, teste, j, nPresentes, pesoMax, pesoPresente, soma;
    int viagem;

    scanf("%d", &teste);

    for(i = 1; i <= teste; i++){
        scanf("%d %d", &nPresentes, &pesoMax);
        soma = 0;
        viagem = 1;

        for(j = 1; j <= nPresentes; j++){
            scanf("%d", &pesoPresente);
            soma += pesoPresente;

            if (soma > pesoMax){
                viagem++;
                soma = pesoPresente;
            } // End If

        } // End For 2

        printf("%d\n", viagem);

    } // End For 1

 return 0;
}
