#include <stdio.h>

int main(void){
    int h, p;
    double media;

    scanf("%d%d", &h, &p);

    media = h*1.0 / p;

    printf("%.2lf\n", media);

    return 0;
}
