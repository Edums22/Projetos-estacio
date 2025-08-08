#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define NAVIOS 3

void inicializarTabuleiro(char tabuleiro[TAM][TAM], char valor) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = valor;
}

void exibirTabuleiro(char tabuleiro[TAM][TAM], int mostrarNavios) {
    printf("  ");
    for (int i = 0; i < TAM; i++) printf(" %d", i);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 'N' && !mostrarNavios)
                printf(" ~");
            else
                printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavios(char tabuleiro[TAM][TAM]) {
    int x, y;
    for (int i = 0; i < NAVIOS; i++) {
        do {
            x = rand() % TAM;
            y = rand() % TAM;
        } while (tabuleiro[x][y] == 'N');
        tabuleiro[x][y] = 'N';
    }
}

void inserirNaviosJogador(char tabuleiro[TAM][TAM]) {
    int x, y;
    printf("Posicione seus %d navios no tabuleiro (coordenadas X Y):\n", NAVIOS);
    for (int i = 0; i < NAVIOS; i++) {
        do {
            printf("Navio %d: ", i + 1);
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= TAM || y < 0 || y >= TAM || tabuleiro[x][y] == 'N');
        tabuleiro[x][y] = 'N';
    }
}

int atacar(char tabuleiro[TAM][TAM], int x, int y) {
    if (tabuleiro[x][y] == 'N') {
        tabuleiro[x][y] = 'X';  // Acertou navio
        return 1;
    } else if (tabuleiro[x][y] == '~') {
        tabuleiro[x][y] = 'O';  // Água
    }
    return 0;
}

int contarNavios(char tabuleiro[TAM][TAM]) {
    int cont = 0;
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            if (tabuleiro[i][j] == 'N')
                cont++;
    return cont;
}

int main() {
    srand(time(NULL));

    char tabJogador[TAM][TAM], tabComputador[TAM][TAM];
    inicializarTabuleiro(tabJogador, '~');
    inicializarTabuleiro(tabComputador, '~');

    inserirNaviosJogador(tabJogador);
    posicionarNavios(tabComputador);

    int x, y;
    while (1) {
        printf("\nSeu tabuleiro:\n");
        exibirTabuleiro(tabJogador, 1);

        printf("\nTabuleiro do computador:\n");
        exibirTabuleiro(tabComputador, 0);

        // Jogador ataca
        do {
            printf("\nSua vez de atacar (X Y): ");
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= TAM || y < 0 || y >= TAM ||
                 tabComputador[x][y] == 'X' || tabComputador[x][y] == 'O');

        if (atacar(tabComputador, x, y)) {
            printf("Você acertou um navio!\n");
        } else {
            printf("Você errou.\n");
        }

        if (contarNavios(tabComputador) == 0) {
            printf("\nParabéns! Você venceu!\n");
            break;
        }

        // Computador ataca
        do {
            x = rand() % TAM;
            y = rand() % TAM;
        } while (tabJogador[x][y] == 'X' || tabJogador[x][y] == 'O');

        printf("Computador atacou (%d, %d): ", x, y);
        if (atacar(tabJogador, x, y)) {
            printf("Acertou seu navio!\n");
        } else {
            printf("Errou.\n");
        }

        if (contarNavios(tabJogador) == 0) {
            printf("\nVocê perdeu! O computador venceu.\n");
            break;
        }
    }

    return 0;
}
