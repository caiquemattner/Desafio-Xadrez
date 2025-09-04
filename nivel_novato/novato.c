#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato: Movimentação das peças usando loops

// Definindo quantos passos cada peça pode se mover
#define BISPO_DIAGONAL 5
#define TORRE_DIREITA 5
#define RAINHA_ESQUERDA 8

int main() {
    int i; // contador para os loops

    printf("=== Bem-vindo ao Nível Novato do MateCheck! ===\n\n");

    // ----------------------------
    // Movimento do Bispo (diagonal pra cima e pra direita)
    // Usando 'for' porque sei exatamente quantos passos ele dá
    // ----------------------------
    printf("Movimento do Bispo:\n");
    for(i = 1; i <= BISPO_DIAGONAL; i++) {
        printf("Passo %d: subindo e indo para a direita\n", i);
    }
    printf("\n");

    // ----------------------------
    // Movimento da Torre (apenas para a direita)
    // Usando 'while' porque posso querer mudar a quantidade de passos depois
    // ----------------------------
    printf("Movimento da Torre:\n");
    i = 1;
    while(i <= TORRE_DIREITA) {
        printf("Passo %d: movendo para a direita\n", i);
        i++;
    }
    printf("\n");

    // ----------------------------
    // Movimento da Rainha (para a esquerda)
    // Usando 'do-while' só pra variar, porque quero que execute pelo menos uma vez
    // ----------------------------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Passo %d: indo para a esquerda\n", i);
        i++;
    } while(i <= RAINHA_ESQUERDA);
    printf("\n");

    printf("=== Fim do Nível Novato! Boa jogada! ===\n");

    return 0;
}
