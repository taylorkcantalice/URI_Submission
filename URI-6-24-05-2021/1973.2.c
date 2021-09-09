/**
 ============================================================================
 Nome      : 1973.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1973 - Jornada nas Estrelas
 ============================================================================
 */

#include <stdio.h>

int EhImpar(int valor){
    if (valor % 2 != 0){
        return 1;
    }

    return 0;
}

int main(void){
    int i, j, nSitios_Estrelas;
    int soma_Carneiros = 0, nSitios_Atacados = 0, nCarneiros_Roubados = 0;

    scanf("%d", &nSitios_Estrelas);
    int estrela[nSitios_Estrelas];

    for(i = 0; i < nSitios_Estrelas; i++){
        scanf("%d", &estrela[i]);
        soma_Carneiros += estrela[i];
    }

    for(i = 0; i < nSitios_Estrelas; i++){
        nSitios_Atacados++; // Todas as vezes que esse 'for' é execultado um sítio diferente foi atacado
        nCarneiros_Roubados++; // Soma de todos os carneiros roubados

        if(!(EhImpar(estrela[i]))){
            for(j = 1; j <= i; j++){

                if(estrela[i - j] == 0){
                    break;
                }
                estrela[i - j]--;
                nCarneiros_Roubados++;
            } // End For
            break;
        } // End If

        estrela[i]--; // O sítio atacado perde um carneiro
    }

    printf("%d %d", nSitios_Atacados, soma_Carneiros - nCarneiros_Roubados);

    return 0;
}
