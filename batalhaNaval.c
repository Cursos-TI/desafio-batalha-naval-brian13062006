#include <stdio.h>

#define TOTAL_LINHAS 11
#define TOTAL_COLUNAS 5

void inicializarTabuleiro(int tabuleiro[TOTAL_LINHAS][TOTAL_COLUNAS]) {
    for (int i = 0; i < TOTAL_LINHAS; i++) {
        for (int j = 0; j < TOTAL_COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}


void Cone(int tabuleiro[TOTAL_LINHAS][TOTAL_COLUNAS]) {
    tabuleiro[0][2] = 1;
    
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;
    
    tabuleiro[2][0] = 1;
    tabuleiro[2][1] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[2][3] = 1;
    tabuleiro[2][4] = 1;
}


void Cruz(int tabuleiro[TOTAL_LINHAS][TOTAL_COLUNAS]) {
    tabuleiro[4][2] = 2;
    
    for (int j = 0; j < TOTAL_COLUNAS; j++) {
        tabuleiro[5][j] = 2;
    }
    
    tabuleiro[6][2] = 2;
}


void Octaedro(int tabuleiro[TOTAL_LINHAS][TOTAL_COLUNAS]) {
   
    tabuleiro[8][2] = 3;
    
    tabuleiro[9][1] = 3;
    tabuleiro[9][2] = 3;
    tabuleiro[9][3] = 3;
    
    tabuleiro[10][2] = 3;
}

void Tabuleiro(int tabuleiro[TOTAL_LINHAS][TOTAL_COLUNAS]) {
    printf("   ");
    for (int j = 0; j < TOTAL_COLUNAS; j++) {
        printf(" %c", 'A' + j);
    }
    printf("\n");
    
    
    for (int i = 0; i < TOTAL_LINHAS; i++) {
        printf("%2d:", i + 1);
        for (int j = 0; j < TOTAL_COLUNAS; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TOTAL_LINHAS][TOTAL_COLUNAS];
    inicializarTabuleiro(tabuleiro);
    

    Cone(tabuleiro);      
    Cruz(tabuleiro);      
    Octaedro(tabuleiro);  
    Tabuleiro(tabuleiro);
    
    return 0;
}