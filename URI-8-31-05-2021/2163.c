/**
 ============================================================================
 Nome      : 2163.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2163 - O Despertar da Força
 ============================================================================
 */

#include <stdio.h>

int main(void){
    unsigned int i, j, linha, coluna, sabreDeLuz = 0;
    double soma = 0;

    scanf("%u", &linha);
    scanf("%u", &coluna);

    int matriz[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){

            if(matriz[i][j] == 42){
                if((matriz[i-1][j-1] == 7) && (matriz[i-1][j] == 7) && (matriz[i-1][j+1] == 7)){
                    if((matriz[i][j-1] == 7) && (matriz[i][j+1] == 7)){
                        if((matriz[i+1][j-1] == 7) && (matriz[i+1][j] == 7) && (matriz[i+1][j+1] == 7)){
                            printf("%u %u\n", i+1, j+1);
                            sabreDeLuz++;
                        }
                    }
                }
            }

        }
    }

    if(!sabreDeLuz){
        printf("0 0\n");
    }

    return 0;
}
