/*
 ============================================================================
 Name        : 1157.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1157 - Divisores I
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, n;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }

 return 0;
}
