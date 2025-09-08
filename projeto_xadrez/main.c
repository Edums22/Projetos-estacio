#include <stdio.h>

int main() {
    // Constantes para quantidade de movimentos
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    int i;

    printf("==== Jogo de Xadrez - MateCheck ====\n\n");

    // ---------------- BISPO ----------------
    printf("Movimento do BISPO (5 casas na diagonal superior direita):\n");
    // Usando loop FOR
    for(i = 1; i <= BISPO_MOV; i++) {
        // Movimento diagonal = combinação de cima + direita
        printf("Passo %d: ", i);
        printf("Cima ");
        printf("Direita\n");
    }
    printf("\n");

    // ---------------- TORRE ----------------
    printf("Movimento da TORRE (5 casas para a direita):\n");
    // Usando loop WHILE
    i = 1;
    while(i <= TORRE_MOV) {
        printf("Passo %d: ", i);
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // ---------------- RAINHA ----------------
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");
    // Usando loop DO...WHILE
    i = 1;
    do {
        printf("Passo %d: ", i);
        printf("Esquerda\n");
        i++;
    } while(i <= RAINHA_MOV);
    printf("\n");

    printf("==== Fim da simulacao de movimentos ====\n");

    return 0;
}
