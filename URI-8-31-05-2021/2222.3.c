#include <stdio.h>

int main(void){
    int i, j, operador, conjunto1, conjunto2, elem1, elem2, contador;
    int nTestes, nConjuntos, nElementos, nOperacoes;

    // Número de Testes a serem realizados
    scanf("%d", &nTestes);
    while(nTestes--){

        scanf("%d", &nConjuntos); // Número de Linhas que corresponde à quantidade de Conjuntos
        int matriz[nConjuntos][61];
        for(i = 0; i < nConjuntos; i++){
            // Número de Elementos que o conjunto vai receber, armazena-se esse valor na matriz na primeira Coluna
            scanf("%d", &matriz[i][0]);
            nElementos = matriz[i][0];

            // Em subsequência se armazena os nElementos reais do Conjunto
            for(j = 1; j <= nElementos; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        // Número de Operações a serem analisadas
        scanf("%d", &nOperacoes);
        do{
            scanf("%d %d %d", &operador, &conjunto1, &conjunto2);
            contador = 0;

            // Diminui-se '1' de cada entrada de conjunto, visto que corresponde ao local onde se encontra na matriz
            elem1 = matriz[conjunto1-1][0]; // elem1 = Número de elementos reais guardados dentro do Conjunto1
            elem2 = matriz[conjunto2-1][0]; // elem2 = Número de elementos reais guardados dentro do Conjunto2

            for(i = 1; i <= elem1; i++){
                for(j = 1; j <= elem2; j++){
                    if(matriz[conjunto1-1][i] == matriz[conjunto2-1][j]){
                        contador++;
                    }
                }
            }

            if(operador == 1){
                // Intersecção dos Conjuntos, imprime a quantidade de elementos que se repetem em ambos conjuntos
                printf("%d\n", contador);
            } else {
                // União Conjuntos
                printf("%d\n", elem1 + elem2 - contador);
            }
        }while(--nOperacoes);
    }

    return 0;
}
