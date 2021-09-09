/**
 ============================================================================
 Nome      : 2221.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Batalha de Pomekons - 2221
 ============================================================================
 */

#include <stdio.h>

float ValorGolpe (int ataque, int defesa, int nivel, int bonus){
    if (nivel % 2 == 0){
        return ((ataque+defesa)/2) + bonus;
    } else {
        return (ataque+defesa)/2;
    } // End If-Else
} // End ValorGolpe()

int main(void){
    int testes, bonus;
    int ataque_Dabriel, defesa_Dabriel, nivel_Dabriel;
    int ataque_Guarte, defesa_Guarte, nivel_Guarte;
    float dabriel, guarte;

    scanf("%d", &testes);

    while(testes--){
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataque_Dabriel, &defesa_Dabriel, &nivel_Dabriel);
        scanf("%d %d %d", &ataque_Guarte, &defesa_Guarte, &nivel_Guarte);

        dabriel = ValorGolpe(ataque_Dabriel, defesa_Dabriel, nivel_Dabriel, bonus);
        guarte = ValorGolpe(ataque_Guarte, defesa_Guarte, nivel_Guarte, bonus);

        if (dabriel > guarte){
            printf("Dabriel\n");
        }else if(guarte > dabriel){
            printf("Guarte\n");
        }else if(dabriel == guarte){
            printf("Empate\n");
        } // End If-Else Aninhado
    } // End While

    return 0;
}
