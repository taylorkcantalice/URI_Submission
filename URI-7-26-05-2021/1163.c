/**
 ============================================================================
 Nome      : 1163.c
 Autor     : Taylor Klaus Cantalice Nobrega - 20200004268
 Versao    : 1.0
 Descricao : 1163 - Angry Ducks
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define gravidade 9.80665
#define pi 3.14159

int main(void){
    double alturaDoBodoque, angulo, velocidade;
    int p1_Inicio, p2_Fim, nTentativas;
    double alcance, seno, cosseno, Vox, Voy, altura_MAX, alturaTotal, tempoDeSubida, tempoDeDescida;

    while(scanf("%lf", &alturaDoBodoque) != EOF){
        scanf("%d %d", &p1_Inicio, &p2_Fim);

        scanf("%d", &nTentativas);
        while(nTentativas--){
            scanf("%lf %lf", &angulo, &velocidade);

            seno = sin(angulo*(pi/180.0));
            cosseno = cos(angulo*(pi/180.0));

            Vox = velocidade * cosseno;
            Voy = velocidade * seno;

            altura_MAX = (Voy*Voy)/(2*gravidade);

            tempoDeSubida = Voy/gravidade; // Tempo de subida a partir do Bodoque até a altura máxima

            alturaTotal = altura_MAX + alturaDoBodoque; // Altura total de descida do ponto mais alto até o solo
            tempoDeDescida = sqrt((2*(alturaTotal))/gravidade); // Tempo de descida a partir da altura máxima até o solo

            alcance = Vox * (tempoDeSubida+tempoDeDescida);

            if(alcance > p1_Inicio && alcance < p2_Fim){
                printf("%.5lf -> DUCK\n", alcance);
            } else {
                printf("%.5lf -> NUCK\n", alcance);
            }
        }
    }

    return 0;
}
