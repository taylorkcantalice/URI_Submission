/*
 ============================================================================
 Name        : 1146.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1146 - Sequências Crescentes
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, x;

    scanf("%d", &x);

    do{
        for(i = 1; i <= x; i++){
            if (i < x){
                printf("%d ", i);
            } else{
                printf("%d\n", x);
            }
        }

        scanf("%d", &x);

    } while (x != 0);

 return 0;
}
