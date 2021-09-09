/*
 ============================================================================
 Name        : 1589.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1589 - Bob Conduite
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int t, r1, r2;
    int i;

    scanf("%d", &t);

    for(i = 1; i <= t; i = i + 1){
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }


 return 0;
}
