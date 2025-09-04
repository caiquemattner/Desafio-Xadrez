#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Aventureiro: Movimento do Cavalo (em L) usando loops aninhados

// Definindo a movimentação do cavalo em L
#define MOVIMENTO_HORIZONTAL 2
#define MOVIMENTO_VERTICAL 1

int main() {
    int h, v; // Variáveis de controle dos loops

    printf("=== Nível Aventureiro ===\n\n");
    printf("Movimento do Cavalo em L (Para Baixo e Para Esquerda):\n\n");

    // Loop aninhado: horizontal e vertical
    for(h = 1; h <= MOVIMENTO_HORIZONTAL; h++) {
        for(v = 1; v <= MOVIMENTO_VERTICAL; v++) {
            printf("Passo: Baixo %d casa(s) e Esquerda %d casa(s)\n", v, h);
        }
    }

    printf("\n=== Fim do Nível Aventureiro ===\n");

    return 0;
}
