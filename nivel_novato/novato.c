#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato: Movimentação das Peças usando loops básicos

// Definição de constantes para quantidade de casas que cada peça se move
#define BISPO_DIAGONAL 5
#define TORRE_DIREITA 5
#define RAINHA_ESQUERDA 8

int main() {
    int i; // Variável de controle dos loops

    printf("=== Nível Novato ===\n\n");

    // ----------------------------
    // Movimentação do Bispo (diagonal superior direita)
    // Utilizando loop 'for'
    // ----------------------------
    printf("Movimento do Bispo (Diagonal Superior Direita):\n");
    for(i = 1; i <= BISPO_DIAGONAL; i++) {
        printf("Passo %d: Cima e Direita\n", i);
    }
    printf("\n");

    // ----------------------------
    // Movimentação da Torre (direita)
    // Utilizando loop 'while'
    // ----------------------------
    printf("Movimento da Torre (Direita):\n");
    i = 1;
    while(i <= TORRE_DIREITA) {
        printf("Passo %d: Direita\n", i);
        i++;
    }
    printf("\n");

    // ----------------------------
    // Movimentação da Rainha (esquerda)
    // Utilizando loop 'do-while'
    // ----------------------------
    printf("Movimento da Rainha (Esquerda):\n");
    i = 1;
    do {
        printf("Passo %d: Esquerda\n", i);
        i++;
    } while(i <= RAINHA_ESQUERDA);
    printf("\n");

    printf("=== Fim do Nível Novato ===\n");

    return 0;
}
