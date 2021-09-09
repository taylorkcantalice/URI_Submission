#include <stdio.h>

int main(void){
    double salario, novo, reajusteGanho;

    scanf("%lf", &salario);

    if ((0 <= salario) && (salario <= 400)) {
        novo = salario + (salario * 0.15);
        reajusteGanho = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajusteGanho);
        printf("Em percentual: 15 \%\%\n");

    } else if ((400 < salario) && (salario <= 800)) {
        novo = salario + (salario * 0.12);
        reajusteGanho = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajusteGanho);
        printf("Em percentual: 12 \%\%\n");

    } else if ((800 < salario) && (salario <= 1200)) {
        novo = salario + (salario * 0.10);
        reajusteGanho = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajusteGanho);
        printf("Em percentual: 10 \%\%\n");

    } else if ((1200 < salario) && (salario <= 2000)) {
        novo = salario + (salario * 0.07);
        reajusteGanho = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajusteGanho);
        printf("Em percentual: 7 \%\%\n");

    } else {
        novo = salario + (salario * 0.04);
        reajusteGanho = novo - salario;
        printf("Novo salario: %.2lf\n", novo);
        printf("Reajuste ganho: %.2lf\n", reajusteGanho);
        printf("Em percentual: 4 \%\%\n");
    }

    return 0;
}
