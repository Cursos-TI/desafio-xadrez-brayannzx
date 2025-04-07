#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// -----------------------------
// Funções recursivas (Nível Mestre)
// -----------------------------

// Movimentação recursiva do Bispo: Diagonal (Cima + Direita)
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

// Movimentação recursiva da Torre: Direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Movimentação recursiva da Rainha: Esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// -----------------------------
// Função principal
// -----------------------------
int main() {
    int i, j;

    // -----------------------------
    // Nível Novato - Estruturas de repetição básicas
    // -----------------------------
    printf("=== NÍVEL NOVATO ===\n");

    // Bispo - Usando for (Cima + Direita)
    printf("\nMovimentação do Bispo (for loop):\n");
    for (i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre - Usando while
    printf("\nMovimentação da Torre (while loop):\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    // Rainha - Usando do-while
    printf("\nMovimentação da Rainha (do-while loop):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);

    // -----------------------------
    // Nível Aventureiro - Loops aninhados
    // -----------------------------
    printf("\n=== NÍVEL AVENTUREIRO ===\n");

    // Cavalo em L: 2 movimentos para Baixo + 1 movimento para Esquerda
    printf("\nMovimentação do Cavalo (aninhado - Baixo e Esquerda):\n");
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");

        j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    // -----------------------------
    // Nível Mestre - Recursão + loops com múltiplas variáveis e break/continue
    // -----------------------------
    printf("\n=== NÍVEL MESTRE ===\n");

    // Bispo com função recursiva
    printf("\nMovimentação do Bispo (recursivo):\n");
    moverBispo(BISPO_MOV);

    // Torre com função recursiva
    printf("\nMovimentação da Torre (recursivo):\n");
    moverTorre(TORRE_MOV);

    // Rainha com função recursiva
    printf("\nMovimentação da Rainha (recursivo):\n");
    moverRainha(RAINHA_MOV);

    // Cavalo em L: 2 para Cima + 1 para Direita com controle complexo
    printf("\nMovimentação do Cavalo (complexo - Cima e Direita):\n");
    for (int i = 0, cima = 0, direita = 0; i < 3; i++) {
        if (cima < 2) {
            printf("Cima\n");
            cima++;
            continue;
        }

        if (direita < 1) {
            printf("Direita\n");
            direita++;
        }

        if (cima == 2 && direita == 1) break;
    }

    return 0;
}
