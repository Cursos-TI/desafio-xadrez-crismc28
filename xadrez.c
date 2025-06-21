#include <stdio.h>

// --------------------------
// Função recursiva para Torre (movimento horizontal)
// --------------------------
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// --------------------------
// Função recursiva com loops aninhados para o Bispo
// --------------------------
void moverBispo(int casas) {
    if (casas == 0) return; // Caso base

    // Simulando o movimento diagonal: cima e direita com dois loops aninhados
    for (int i = 0; i < 1; i++) { // Movimento vertical (cima)
        for (int j = 0; j < 1; j++) { // Movimento horizontal (direita)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // Próximo passo na diagonal
}

// --------------------------
// Função recursiva para Rainha (movimento lateral)
// --------------------------
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// --------------------------
// Função com loops complexos para o Cavalo (2 para cima, 1 para a direita)
// --------------------------
void moverCavaloL() {
    printf("\nMovimento do Cavalo:\n");

    // Loop externo: movimento vertical (2 casas para cima)
    for (int i = 0; i < 3; i++) {
        if (i == 2) break; // Evita terceira repetição

        printf("Cima\n");

        // Loop interno: condição extra com continue
        for (int j = 0; j < 2; j++) {
            if (i < 1) continue; // Só entra na segunda iteração do loop externo
            if (j == 0) {
                printf("Direita\n"); // Uma vez após duas subidas
                break;
            }
        }
    }
}

// --------------------------
// Função principal
// --------------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavaloL(); // já inclui printf interno

    return 0;
}
