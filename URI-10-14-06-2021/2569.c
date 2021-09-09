/**
 ============================================================================
 Nome      : 2569.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 2569 - A Bruxa do 7 x 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int i, a, b, total, verificar_7 = 1;
    char str[3][14], bruxa71[14];

    for(i = 0; i < 3; i++){
        scanf("%s%*c", str[i]);
    }

    while(verificar_7){
        verificar_7 = 0;

        for(i = 0; str[0][i] != '\0'; i++){
            if(str[0][i] == '7'){
                str[0][i] = '0';
                verificar_7 = 1;
            }
        }
    }

    verificar_7 = 1;
    while(verificar_7){
        verificar_7 = 0;

        for(i = 0; str[2][i] != '\0'; i++){
            if(str[2][i] == '7'){
                str[2][i] = '0';
                verificar_7 = 1;
            }
        }
    }

    a = atoi(str[0]);
    b = atoi(str[2]);

    if(str[1][0] == '+'){
        total = a + b;
    } else {
        total = a * b;
    }

    sprintf(bruxa71, "%d", total);

    verificar_7 = 1;
    while(verificar_7){
        verificar_7 = 0;

        for(i = 0; bruxa71[i] != '\0'; i++){
            if(bruxa71[i] == '7'){
                bruxa71[i] = '0';
                verificar_7 = 1;
            }
        }
    }

    total = atoi(bruxa71);
    printf("%d\n", total);

    return 0;
}
