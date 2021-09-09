/*
 ============================================================================
 Name        : 1080.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1080 - Maior e Posição
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, num, numMaior = -5000, numPosicao;

    for(i = 1; i <= 100; i++){
        scanf("%d", &num);

        if(num > numMaior){
            num = num - numMaior;
            numMaior = num + numMaior;
            num = numMaior - num;

            numPosicao = i;
        }
    }

    printf("%d\n%d\n", numMaior, numPosicao);

 return 0;
}
