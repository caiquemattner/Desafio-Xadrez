#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre: Movimentos com funções recursivas e loops avançados

#define BISPO_DIAGONAL 5
#define TORRE_DIREITA 5
#define RAINHA_ESQUERDA 8

// Função recursiva para Bispo
void moverBispo(int passo, int max) {
    if(passo > max) return;
    printf("Bispo - Passo %d: Cima e Direita\n", passo);
    moverBispo(passo + 1, max);
}

// Função recursiva para Torre
void moverTorre(int passo, int max) {
    if(passo > max) return;
    printf("Torre - Passo %d: Direita\n", passo);
    moverTorre(passo + 1, max);
}

// Função recursiva para Rainha
void moverRainha(int passo, int max) {
    if(passo > max) return;
    printf("Rainha - Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1, max);
}

int main() {
    int h, v; // Variáveis para movimento do Cavalo

    printf("=== Nível Mestre ===\n\n");

    // Movimentos recursivos
    printf("Movimento do Bispo:\n");
    moverBispo(1, BISPO_DIAGONAL);
    printf("\n");

    printf("Movimento da Torre:\n");
    moverTorre(1, TORRE_DIREITA);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(1, RAINHA_ESQUERDA);
    printf("\n");

    // Movimento do Cavalo com loops avançados
    printf("Movimento do Cavalo (Uma vez em L, Para Cima e Direita):\n\n");
    for(h = 1; h <= 2; h++) {
        for(v = 1; v <= 1; v++) {
            if(h == 2) {
                printf("Cavalo - Passo: Cima %d e Direita %d\n", v, h);
                break; // exemplo de break
            }
            continue; // exemplo de continue
        }
    }

    printf("\n=== Fim do Nível Mestre ===\n");

    return 0;
}
