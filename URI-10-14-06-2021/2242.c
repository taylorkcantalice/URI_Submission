/**
 ============================================================================
 Nome      : 2242.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2242 - Huaauhahhuahau
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i, j;
    char Risada_Digital[51], aux_Risada_Digital[51];
    size_t tamanho;

    // Entrada da risada digital
    scanf("%s", Risada_Digital);

    tamanho = strlen(Risada_Digital);

    // Analisa a quantidade de vogais na string
    for(i = 0, j = 0; i < tamanho; i++){
        if(Risada_Digital[i] == 'a' || Risada_Digital[i] == 'e' || Risada_Digital[i] == 'i' || Risada_Digital[i] == 'o' || Risada_Digital[i] == 'u'){
            aux_Risada_Digital[j] = Risada_Digital[i];
            j++;
        }
    }
    aux_Risada_Digital[j] = '\0';

    tamanho = strlen(aux_Risada_Digital);

    for(i = 0, j = tamanho-1; i < tamanho; i++, j--){
        if(aux_Risada_Digital[i] != aux_Risada_Digital[j]){
            puts("N");
            return 0;
        }
    }
    puts("S");

    return 0;
}
