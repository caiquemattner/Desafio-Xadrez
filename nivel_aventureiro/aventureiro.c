#include <stdio.h>

// Nível Aventureiro: Movimento do Cavalo (em L) usando loops aninhados

#define MOVIMENTO_HORIZONTAL 2  // Quantas casas o cavalo vai para a esquerda
#define MOVIMENTO_VERTICAL 1    // Quantas casas o cavalo vai para baixo

int main() {
    int h, v; // Contadores para os loops horizontal e vertical

    printf("=== Bem-vindo ao Nível Aventureiro! ===\n\n");
    printf("Movimento do Cavalo em L (Para Baixo e Para Esquerda):\n\n");

    // Loop aninhado:
    // Primeiro o cavalo se move horizontalmente,
    // depois verticalmente, formando o movimento em L
    for(h = 1; h <= MOVIMENTO_HORIZONTAL; h++) {
        for(v = 1; v <= MOVIMENTO_VERTICAL; v++) {
            printf("Passo: Baixo %d casa(s) e Esquerda %d casa(s)\n", v, h);
        }
    }

    printf("\n=== Fim do Nível Aventureiro! Boa jogada! ===\n");
    return 0;
}
