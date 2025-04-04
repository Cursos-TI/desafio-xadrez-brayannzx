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

int main() {
    int x = 4, y = 4; // posição inicial do cavalo
    int novoX, novoY;

    printf("Movimentos em L do Cavalo para BAIXO e ESQUERDA a partir de (%d, %d):\n", x, y);

    // Loop externo com FOR para movimentos na vertical (baixo)
    for (int dx = 1; dx <= 2; dx++) {
        int dy = 1; // inicializa o contador para o loop interno

        // Loop interno com WHILE para movimentos na horizontal (esquerda)
        while (dy <= 2) {
            // A soma dos quadrados deve ser 5 para ser um movimento em L
            if (dx * dx + dy * dy == 5) {
                novoX = x + dx;   // movendo para baixo
                novoY = y - dy;   // movendo para a esquerda

                // Verifica se a nova posição está dentro do tabuleiro 8x8
                if (novoX >= 0 && novoX < 8 && novoY >= 0 && novoY < 8) {
                    printf("-> (%d, %d)\n", novoX, novoY);
                }
            }
            dy++;
        }
    }

    return 0;
}
