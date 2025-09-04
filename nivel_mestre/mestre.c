#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre: Movimentos usando funções recursivas e loops avançados

#define BISPO_DIAGONAL 5
#define TORRE_DIREITA 5
#define RAINHA_ESQUERDA 8

// ----------------------------
// Função recursiva para mover o Bispo
// ----------------------------
void moverBispo(int passo, int max) {
    if(passo > max) return; // condição de parada
    printf("Bispo - Passo %d: Cima e Direita\n", passo);
    moverBispo(passo + 1, max); // chamada recursiva
}

// ----------------------------
// Função recursiva para mover a Torre
// ----------------------------
void moverTorre(int passo, int max) {
    if(passo > max) return;
    printf("Torre - Passo %d: Direita\n", passo);
    moverTorre(passo + 1, max);
}

// ----------------------------
// Função recursiva para mover a Rainha
// ----------------------------
void moverRainha(int passo, int max) {
    if(passo > max) return;
    printf("Rainha - Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1, max);
}

int main() {
    int h, v; // variáveis para o movimento do Cavalo

    printf("=== Bem-vindo ao Nível Mestre! ===\n\n");

    // ----------------------------
    // Movimentos recursivos
    // ----------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(1, BISPO_DIAGONAL);
    printf("\n");

    printf("Movimento da Torre:\n");
    moverTorre(1, TORRE_DIREITA);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(1, RAINHA_ESQUERDA);
    printf("\n");

    // ----------------------------
    // Movimento do Cavalo com loops avançados
    // Demonstração de break e continue
    // ----------------------------
    printf("Movimento do Cavalo (em L, Para Cima e Direita):\n\n");
    for(h = 1; h <= 2; h++) {           // h representa movimento horizontal
        for(v = 1; v <= 1; v++) {       // v representa movimento vertical
            if(h == 2) {                // quando h == 2, executa o movimento
                printf("Cavalo - Passo: Cima %d e Direita %d\n", v, h);
                break;                   // sai do loop interno após o movimento
            }
            continue;                    // pula para a próxima iteração do loop externo
        }
    }

    printf("\n=== Fim do Nível Mestre! Excelente trabalho! ===\n");

    return 0;
}
