/**
 ============================================================================
 Nome      : 1554.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : Bilhar N+1 - 1554
 ============================================================================
 */

#include <stdio.h>

unsigned long PlanoXY(int branca_X, int branca_Y, int colorida_X, int colorida_Y){
    int plano_X, plano_Y;

    plano_X = colorida_X - branca_X;
    plano_Y = colorida_Y - branca_Y;

    return (plano_X*plano_X + plano_Y*plano_Y);
} // End PlanoXY()

int main(void){
    int testes, bolas, nBola, n;
    int branca_X, branca_Y;
    int colorida_X, colorida_Y;
    unsigned long plano_XY;

    scanf("%d", &testes);

    while(testes--){
        scanf("%d", &bolas);
        scanf("%d %d", &branca_X, &branca_Y);

        nBola = 0;
        plano_XY = 1000000000000;

        while(bolas--){
            scanf("%d %d", &colorida_X, &colorida_Y);
            nBola++;

            if ((PlanoXY(branca_X, branca_Y, colorida_X, colorida_Y)) < plano_XY){
                plano_XY = PlanoXY(branca_X, branca_Y, colorida_X, colorida_Y);
                n = nBola;
            } // End If
        } // End While(bolas)

        printf("%d\n", n);
    } // End While(testes)

    return 0;
}
