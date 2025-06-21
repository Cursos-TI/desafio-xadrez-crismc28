#include <stdio.h>

int main() {
    // Número de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -----------------------
    // Movimento da Torre (5 casas para a Direita) - usando FOR
    // -----------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // -----------------------
    // Movimento do Bispo (5 casas na Diagonal para Cima e Direita) - usando WHILE
    // -----------------------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // -----------------------
    // Movimento da Rainha (8 casas para a Esquerda) - usando DO-WHILE
    // -----------------------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    return 0;
}
