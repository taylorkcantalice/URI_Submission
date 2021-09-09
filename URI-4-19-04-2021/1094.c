/*
 ============================================================================
 Name        : 1094.c
 Author      : Taylor Klaus Cantalice Nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : 1094 - Experiências
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int i, n, cobaia;
    int soma = 0, coelhos = 0, ratos = 0, sapos = 0;
    char tipoCobaia;
    double percC, percR, percS;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d%*c%c", &cobaia, &tipoCobaia);

        switch (tipoCobaia){
            case 'C':
            case 'c':
                coelhos += cobaia;
                break;
            case 'R':
            case 'r':
                ratos += cobaia;
                break;
            case 'S':
            case 's':
                sapos += cobaia;
                break;
        } // End Switch

        soma += cobaia;

    } // End For

    percC = (coelhos * 100.0)/soma;
    percR = (ratos * 100.0)/soma;
    percS = (sapos * 100.0)/soma;

    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percC);
    printf("Percentual de ratos: %.2lf %%\n", percR);
    printf("Percentual de sapos: %.2lf %%\n", percS);

 return 0;
}
