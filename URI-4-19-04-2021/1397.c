/*
 ============================================================================
 Name        : 1397.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1397 - Jogo do Maior
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int i, n = 1, a, b, x, y;

    while (n){
        scanf("%d", &n);

        if (n == 0){
            continue;
        }

        x = 0;
        y = 0;

        for(i = 1; i <= n; i++){
            scanf("%d %d", &a, &b);
            if (a == b){
                continue;
            }
            a > b ? x++ : y++;
        }

        printf("%d %d\n", x, y);
    }

 return 0;
}
