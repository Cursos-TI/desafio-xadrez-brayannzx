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
