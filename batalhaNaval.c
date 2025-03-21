#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // 1. Inicializa o tabuleiro com 0 (representando água)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posiciona os navios
    // Navio horizontal na linha 1, começando na coluna 0
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[0][i] = 3;
    }

    // Navio vertical na coluna 9, começando na linha 1
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[i + 1][9] = 3;
    }

    // Navio na diagonal principal (ex: tabuleiro[i][i])
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[i + 1][i + 1] = 3;
    }

    // Navio na diagonal secundária (ex: tabuleiro[i][TAMANHO - 1 - i])
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[i][TAMANHO - 1 - i] = 3;
    }

    // 3. Exibe o tabuleiro no console
    printf("   ");
    for (int j = 0; j < TAMANHO; j++) {
        printf("%d ", j + 1); // Adicionando espaço para alinhamento correto
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1); // Alinhando o número da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}