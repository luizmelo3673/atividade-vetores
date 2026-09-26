#include <stdio.h>

#define TAMANHO 20

int main() {
    int numeros[TAMANHO];
    int soma = 0;
    int somaPares = 0;
    int quantidadePares = 0;
    int positivos = 0;
    int negativos = 0;
    int maior, menor;
    double mediaPares;

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];

        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            quantidadePares++;
        }

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }

        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }

            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    printf("\n--- RESULTADOS ---\n");

    printf("Soma dos elementos: %d\n", soma);

    if (quantidadePares > 0) {
        mediaPares = (double)somaPares / quantidadePares;
        printf("Media dos elementos pares: %.2f\n", mediaPares);
    } else {
        printf("Nao existem numeros pares para calcular a media.\n");
    }

    printf("Quantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Menor numero armazenado: %d\n", menor);
    printf("Maior numero armazenado: %d\n", maior);

    printf("\nElementos armazenados no vetor:\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}