/*
 ============================================================================
 Name        : 1329.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1329 - Cara ou Coroa
 ============================================================================
 */

#include <stdio.h>
int main(void){
    int i, n, r, x, y;

    while(n != 0){

        scanf("%d", &n);
        if (n == 0){
            continue;
        }
        x = 0;
        y = 0;

        for(i = 1; i <= n; i++){
            scanf("%d", &r);

            switch(r){
                case 0:
                    x++;
                    break;
                case 1:
                    y++;
                    break;
            }
        }

        printf("Mary won %d times and John won %d times\n", x, y);
    }



 return 0;
}
