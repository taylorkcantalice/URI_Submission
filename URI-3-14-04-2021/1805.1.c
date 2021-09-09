/*
 ============================================================================
 Name        : 1805.c
 Author      : taylor klaus cantalice nobrega
 Version     :
 Copyright   : Your copyright notice
 Description : 1805 - Soma Natural
 ============================================================================
 */

 #include <stdio.h>
 #include <stdlib.h>
int main(void){
    unsigned long long a, b, s;
    scanf("%llu %llu", &a, &b);
    s=b*(b+1)/2;
    printf("%llu", s);
 return 0;
}
