#include <stdio.h>

int main() {
    // Quantidade de casas para cada movimento
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 2;
    int casasEsquerda = 1;

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

    // -----------------------
    // Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda) - usando FOR + WHILE
    // -----------------------
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for): movimentos verticais (duas casas para baixo)
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
        
        // Loop interno (while): apenas executa uma vez para o movimento horizontal
        int m = 0;
        while (m < casasEsquerda && i == casasBaixo - 1) {
            // Só executa após os dois movimentos para baixo
            printf("Esquerda\n");
            m++;
        }
    }

    return 0;
}
