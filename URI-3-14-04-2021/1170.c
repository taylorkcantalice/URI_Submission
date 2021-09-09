/*
 ============================================================================
 Name        : 1170.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1170 - Blobs
 ============================================================================
 */

 #include <stdio.h>
int main(void){
    int i, n, dias;
    float c;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        scanf("%f", &c);
        dias = 0;

        while(c > 1){
            c = c/2;
            dias++;
        }

        printf("%d dias\n", dias);

    }

 return 0;
}
