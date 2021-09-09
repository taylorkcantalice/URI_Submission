#include <stdio.h>

int main(void){
    double a, b, c, x;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (b > a) {
        x = b;
        b = a;
        a = x;
    }
    if (c > a) {
        x = c;
        c = a;
        a = x;
    }
    if (c > b) {
        x = c;
        c = b;
        b = x;
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if ((a*a) == (b*b + c*c)) {
        printf("TRIANGULO RETANGULO\n");
    }

    if ((a*a) > (b*b + c*c)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    if ((a*a) < (b*b + c*c)) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if ((a == b) && (a == c)) {
        printf("TRIANGULO EQUILATERO\n");
    }

    if (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a))) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
