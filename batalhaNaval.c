#include <stdio.h>

// Desafio Batalha Naval - MateCheck - Nível Novato

int main() {
    // Criando tabuleiro 5x5 inicializado com 0
    int tabuleiro[5][5] = {0};

    // Posicionando navio vertical (posição fixa para facilitar a visualização)
    int navioVertX = 1; // coluna fixa
    int navioVertY = 0; // linha inicial

    for (int i = 0; i < 3; i++) { // navio de 3 partes
        tabuleiro[navioVertY + i][navioVertX] = 3;
        printf("Navio vertical - Parte %d: (%d, %d)\n", i + 1, navioVertY + i, navioVertX);
    }

    // Posicionando navio horizontal
    int navioHorX = 2; // coluna inicial
    int navioHorY = 4; // linha fixa

    for (int i = 0; i < 3; i++) {
        tabuleiro[navioHorY][navioHorX + i] = 3;
        printf("Navio horizontal - Parte %d: (%d, %d)\n", i + 1, navioHorY, navioHorX + i);
    }

    // Visual extra: exibir tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
