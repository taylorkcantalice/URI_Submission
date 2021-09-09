/**
 ============================================================================
 Nome      : 1168.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1168 - LED
 ============================================================================
 */

#include <stdio.h>

int LEDs(const char *string){
    unsigned int i, contador = 0;

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == '1'){
           contador += 2;
        }
        if(string[i] == '2'){
           contador += 5;
        }
        if(string[i] == '3'){
           contador += 5;
        }
        if(string[i] == '4'){
           contador += 4;
        }
        if(string[i] == '5'){
           contador += 5;
        }
        if(string[i] == '6'){
           contador += 6;
        }
        if(string[i] == '7'){
           contador += 3;
        }
        if(string[i] == '8'){
           contador += 7;
        }
        if(string[i] == '9'){
           contador += 6;
        }
        if(string[i] == '0'){
           contador += 6;
        }
    }

    return contador;
}

int main(void){
    unsigned int i, testes;
    char ar[1000];

    scanf("%u", &testes);
    for(i = 0; i < testes; i++){
        scanf("%s", ar);
        printf("%u leds\n", LEDs(ar));
    }

    return 0;
}
