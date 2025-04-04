#include <stdio.h>

// Definição de constantes para os movimentos
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Simulação do movimento do Bispo (5 casas na diagonal superior direita)
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    printf("--------------------------\n");

    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    printf("--------------------------\n");

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");
    }

    return 0;
}

 // Simulação dos movimentos do Cavalo
    printf("Movimentos possíveis do Cavalo a partir da posição (4, 4):\n");
    int x = 4;
    int y = 4;

    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            if ((dx * dx + dy * dy == 5)) {
                int novoX = x + dx;
                int novoY = y + dy;

                // Verifica se está dentro dos limites de um tabuleiro 8x8
                if (novoX >= 0 && novoX < 8 && novoY >= 0 && novoY < 8) {
                    printf("(%d, %d)\n", novoX, novoY);
                }
            }
        }
    }

    return 0;
